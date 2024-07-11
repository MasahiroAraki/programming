#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int));
    *p = 5;
    printf("%d\n", *p);
    free(p);
    return 0; 
}
