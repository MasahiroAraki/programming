#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a positive integer: "); scanf("%d", &x);
    if (x <= 0) {
        printf("Input error!\n");
        return -1;
    }
    printf("You entered %d\n", x);

    return 0; 
}
