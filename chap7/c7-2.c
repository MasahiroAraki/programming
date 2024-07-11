#include <stdio.h>

int main() {
    int number;
    double pi = 3.14159;

    number = pi; // 整数型の変数に浮動小数点数型の値を代入
    printf("number=%d\n", number);  // 小数点以下が切り捨てられる
}
