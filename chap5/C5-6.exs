defmodule Filter1 do
    def main do
        name_list = ["Alice", "Bob", "Caroline", "David", "Eve"]
        filtered_list = Enum.filter(name_list, &has_a/1)
        IO.inspect(filtered_list)
    end

    defp has_a(s), do: String.contains?(s, "a")
end

Filter1.main
