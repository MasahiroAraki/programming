#include <stdio.h>

int main(void)
{
    int no;
    int score[5] = {80, 65, 70, 93, 77};
    printf("Student number? (0-4): ");
    scanf("%d", &no);
    printf("Score: %d\n", score[no]);

    return 0; 
}
