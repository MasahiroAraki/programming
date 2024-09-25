defmodule Process1 do
    def main do
        # 受信プロセス
        receiver_pid = spawn(fn ->
            receive do
                {:ok, message} -> IO.puts("Received message: #{message}")
            end
        end)
        # 送信プロセス
        send(receiver_pid, {:ok, "Hello from sender"})
    end
end

Process1.main
