#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    *p = 50;
    printf("*p=%d\n", *p);
    free(p);
    return 0;
}
