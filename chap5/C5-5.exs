defmodule Map1 do
    def main do
        name_list = ["Amanda", "Bob", "Charlie", "David", "Eve"]
        len_list = Enum.map(name_list, &String.length/1)
        IO.inspect(len_list)
    end
end

Map1.main
