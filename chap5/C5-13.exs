defmodule SharedCounter do
    def start do
        num_processes = 2
        num_increments = 10000

        # 共有リソースとしてカウンタを0で初期化
        {:ok, counter} = Agent.start_link(fn -> 0 end)

        # プロセスを作成し、カウンタをインクリメントする
        processes =
            for _ <- 1..num_processes do
                spawn(fn -> increment_counter(counter, num_increments) end)
            end

        # すべてのプロセスが終了するのを待つ
        for process <- processes do
            Process.monitor(process)
            receive do
                {:DOWN, _, _, ^process, _} -> :ok
            end
        end

        # 最終的なカウンタの値を取得して表示
        final_count = Agent.get(counter, & &1)
        IO.puts("Final Count: #{final_count}")

        # エージェントを停止
        Agent.stop(counter)
    end

    defp increment_counter(counter, num_increments) do
        for _ <- 1..num_increments do
            Agent.update(counter, &(&1 + 1))
        end
    end
end

SharedCounter.start