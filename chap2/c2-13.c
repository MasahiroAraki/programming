#include <stdio.h>

int add(int a, int b) { return a + b; }

int multiply(int a, int b) { return a * b; }

int main()
{
    int x = 2, y = 3;

    // 関数ポインタを定義し、add関数へのポインタを割り当てる
    int (*functionPtr)(int, int) = add;
    printf("%d + %d = %d\n", x, y, (*functionPtr)(x, y)); 

    // 関数ポインタをmultiply関数へのポインタに変更する
    functionPtr = multiply;
    printf("%d * %d = %d\n", x, y, (*functionPtr)(x, y)); 

    return 0;
}
