// ユーザーからの入力を処理
// 型推論を使えば const userName = prompt("Input name:"); でも可
const userName: string | null = prompt("Input name:");
if (userName !== null) {
    console.log(`Hello, ${userName}`);
} else {
    console.log("Canceled");
}