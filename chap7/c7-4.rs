fn main() {
    let number = 50; // i32型と推論される
    let text = "Hello world!"; // &str型と推論される
    let numbers = vec![1, 2, 3]; // Vec<i32>型と推論される
    let first = numbers.first(); // Option<&i32>型と推論される
    let add_one = |x| x + 1; // 下の呼び出しから |x: i32| -> i32 と推論される
    let result = add_one(5);
}