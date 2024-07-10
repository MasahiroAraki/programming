defmodule Filter3 do
  def main do
    char = "e"
    name_list = ["Amanda", "Bob", "Charlie", "David", "Eve"]
    filtered_list = Enum.filter(name_list, fn s -> String.contains?(s, char) end)
    IO.inspect(filtered_list)
  end
end

Filter3.main
