defmodule Reduce1 do
  def main do
    num_list = [0, 1, 2, 3, 4, 5]
    result = Enum.reduce(num_list, 0, &sum_of_squares/2)
    IO.puts result
  end

  defp sum_of_squares(x, y), do: y + x * x
end

Reduce1.main
