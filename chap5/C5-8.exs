defmodule Filter2 do
    def main do
        char = "e"
        name_list = ["Alice", "Bob", "Caroline", "David", "Eve"]
        filtered_list = Enum.filter(name_list, fn s -> String.contains?(s, char) end)
        IO.inspect(filtered_list)
    end
end

Filter2.main
