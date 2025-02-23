fn longest<'a>(x: &'a str, y: &'a str) -> &'a str {
    if x.len() > y.len() { x } else { y }
}

fn main() {
    let s1 = String::from("short");
    let s2 = String::from("longer");

    let result = longest(s1.as_str(), s2.as_str());
    println!("The longest string is {}", result);
}
