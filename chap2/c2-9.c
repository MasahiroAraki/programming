#include <stdio.h>

int main(void)
{
    int score[] = {80, 65, 70, 93, 77};
    int n = sizeof(score) / sizeof(score[0]);
    for (int i=0; i<n; i++)
        printf("score[%d] = %d\n", i, score[i]);
    return 0; 
}
