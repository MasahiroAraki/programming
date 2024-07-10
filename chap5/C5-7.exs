defmodule Filter2 do
  def main do
    name_list = ["Amanda", "Bob", "Charlie", "David", "Eve"]
    filtered_list = Enum.filter(name_list, fn s -> String.contains?(s, "a") end)
    IO.inspect(filtered_list)
  end
end

Filter2.main
