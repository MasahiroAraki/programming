// 正の数値が入力されるまで繰り返す
let x;
while (true) {
    let input = prompt('Enter positive number: ');
    if (input === null) {
        console.log('入力がキャンセルされました');
        break;
    }
    x = parseFloat(input);
    if (isNaN(x)) {
        console.log(`${input} は数値に変換できません。`);
        continue;
    } else if (x <= 0) {
        console.log(`${input} は正の数値ではありません。`);
        continue;
    }
    console.log(x);
    break;
}