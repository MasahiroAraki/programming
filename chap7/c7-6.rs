struct Person {
    name: String
}

impl Person {
    fn get_name(&self) -> &String {&self.name}
}

fn get_person() -> Option<Person> {
    //Some(Person{name: "Taro".to_string()})
    None
}

fn main() {
    let optional_person = get_person();

    match optional_person {
        Some(person) => println!("名前: {}", person.get_name()),
        None => println!("Personオブジェクトは存在しません。"),
    }
}
