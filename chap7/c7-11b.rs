fn main() {
    let mut my_vec = vec![1, 2, 3, 4, 5];
    add_one_to_each(&mut my_vec);  // my_vec の参照をわたす

    println!("{:?}", my_vec);
}

fn add_one_to_each(vec: &mut Vec<i32>) {
    for i in vec.iter_mut() {
        *i += 1;
    }
}
