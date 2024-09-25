#include <stdio.h>

int factorial(int n) {
    if (n > 0)
        return n * factorial(n-1);
    else
        return 1;
}

int main(void) {
    int num = 3;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
