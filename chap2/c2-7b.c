#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter integer (0-2): "); scanf("%d", &a);
    if (a == 0) {
        printf("small size\n");
    } else if (a == 1) {
        printf("medium size\n");
    } else if (a == 2) {
        printf("large size\n");
    } else {
        printf("error!\n");
    }

    return 0; 
}
