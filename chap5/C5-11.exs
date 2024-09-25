defmodule Parallel1 do
    def main do
        # 複数のプロセスを生成
        pids = for _ <- 1..5 do
            spawn(fn -> wait_and_respond() end)
        end

        # 生成したプロセスにメッセージを送信
        Enum.each(pids, fn pid ->
            send(pid, {:msg, self(), "S: Hello. "})
        end)

        # メッセージのレスポンスを待機し、生成したプロセス数だけ受け取ったら終了
        for _ <- pids do
            receive do
                {:response, sender_pid, res} ->
                  IO.puts("Received response from #{inspect(sender_pid)}: #{res}")
            end
        end
    end

    # メッセージを受け取り、ランダムな時間待機後、ランダムなレスポンスを送信
    defp wait_and_respond do
        responses = [
          "R: Hello.",
          "R: Good by.",
          "R: Hi!",
          "R: Who are you?",
          "R: ..."
        ]

        receive do
            {:msg, sender, msg} ->
                response = Enum.random(responses)
                :timer.sleep(:rand.uniform(1000))
                send(sender, {:response, self(), msg <> response})
        end
    end
end

Parallel1.main