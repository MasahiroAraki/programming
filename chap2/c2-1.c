#include <stdio.h>

int main(void)
{
    int amount;
    const int price = 150;
    printf("How many do you need?: ");
    scanf("%d", &amount);
    printf("Total : %d yen\n", price * amount);

    return 0; 
}