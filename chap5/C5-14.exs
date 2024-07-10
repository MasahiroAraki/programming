defmodule AsyncDataFetch do
  # ユーザ情報を取得する模擬関数
  def fetch_user_info(uid) do
    Process.sleep(100) # 0.1秒スリープ
    [%{id: uid, name: "John Doe"}]
  end

  # ユーザの投稿を取得する模擬関数
  def fetch_posts(uid) do
    Process.sleep(300) # 0.3秒スリープ
    [%{id: uid, title: "Elixir is fun!"}]
  end

  # ユーザのコメントを取得する模擬関数
  def fetch_comments(uid) do
    Process.sleep(150) # 1.5秒スリープ
    [%{id: uid, content: "Great post!"}]
  end

  # すべてのデータを非同期に取得し、結果を集約する関数
  def fetch_all_data(user_id) do
    tasks = [
      Task.async(fn -> fetch_user_info(user_id) end),
      Task.async(fn -> fetch_posts(user_id) end),
      Task.async(fn -> fetch_comments(user_id) end)
    ]

    # すべてのタスクの結果を待つ
    results = Enum.map(tasks, &Task.await(&1, 5000))
    IO.inspect(results)
  end
end

AsyncDataFetch.fetch_all_data(1)