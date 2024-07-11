fn main() {
    let my_vec = vec![1, 2, 3, 4, 5];
    consume_vector(&my_vec);  // my_vec の参照をわたす

    println!("{:?}", my_vec);
}

fn consume_vector(v: &Vec<i32>) {
    println!("Consuming vector: {:?}", v);
}