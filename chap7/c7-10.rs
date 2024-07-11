fn main() {
    let my_vec = vec![1, 2, 3, 4, 5];
    consume_vector(my_vec);  // my_vec の所有権が移動

    // println!("{:?}", my_vec); // コンパイルエラー
}

fn consume_vector(v: Vec<i32>) {
    println!("Consuming vector: {:?}", v);
    // v のスコープが終了すると、自動的にドロップ
}
