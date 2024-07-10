defmodule SquareRoot do
  @eps 0.0001

  def main do
    x = read_positive_float()
    sq = sqrt(x)
    IO.puts "Square root of #{x} is #{sq}"
  end

  defp read_positive_float do
    IO.write "Enter a positive number: "
    input = IO.gets("") |> String.trim()
    case Float.parse(input) do
      {number, ""} when number > 0.0 ->
        number
      _ ->
        IO.puts "Input error!"
        read_positive_float()  # 末尾再帰によるループ
    end
  end

  defp sqrt(number), do: sqrt_iter(number, number)

  defp sqrt_iter(number, guess) do
    new_guess = (guess + number / guess) / 2
    if close_enough?(guess, new_guess) do
      new_guess
    else
      sqrt_iter(number, new_guess)
    end
  end

  defp close_enough?(a, b), do: abs(a - b) < @eps
end

SquareRoot.main
