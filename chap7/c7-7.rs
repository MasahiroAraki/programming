use std::fs::File;
use std::io::{self, Read};

// ファイルの内容を読み込み、結果をResult型で返す関数
fn read_file_contents(file_path: &str) -> Result<String, io::Error> {
    let mut file = File::open(file_path)?;
    let mut contents = String::new();
    file.read_to_string(&mut contents)?;
    Ok(contents)
}

fn main() {
    match read_file_contents("data.csv") {
        Ok(contents) => {
            // ファイルの内容をコンソールに出力
            println!("{}", contents);
        },
        Err(e) => {
            // エラーをコンソールに出力
            println!("An error occurred: {}", e);
        }
    }
}