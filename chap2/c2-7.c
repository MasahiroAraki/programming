#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter integer (0-2): "); scanf("%d", &a);
    switch (a) {
        case 0: printf("small size\n"); break;
        case 1: printf("medium size\n"); break;
        case 2: printf("large size\n"); break;
        default: printf("error!\n"); break;
    }

    return 0; 
}
