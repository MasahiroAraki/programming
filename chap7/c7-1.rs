use std::io;

fn input_number() -> i32 {
    loop {
        println!("Enter a positive integer: ");
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Failed to read line");
        match input.trim().parse::<i32>() {
            Ok(num) if num > 0 => return num,
            _ => println!("Input error!"),
        }
    }
}

fn calculate_squareroot(x: f64) -> f64 {
    let mut rnew = x;
    while (rnew - x / rnew).abs() > 1.0E-5 {
        rnew = (rnew + x / rnew) / 2.0;
    }
    rnew
}

fn main() {
    let x: i32 = input_number();
    let sq: f64 = calculate_squareroot(x as f64);
    println!("Square root of {} is {:7.5}", x, sq);
}
