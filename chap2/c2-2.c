#include <stdio.h>

int main(void)
{
    int x;
    double r1, r2, rnew;

    printf("Enter a positive integer: "); scanf("%d", &x);
    rnew = x;

    r1 = rnew; r2 = x/r1; rnew = (r1 + r2)/2;
    printf("%7.5f < %7.5f < %7.5f\n", r2, rnew, r1);

    r1 = rnew; r2 = x/r1; rnew = (r1 + r2)/2;
    printf("%7.5f < %7.5f < %7.5f\n", r2, rnew, r1);

    r1 = rnew; r2 = x/r1; rnew = (r1 + r2)/2;
    printf("%7.5f < %7.5f < %7.5f\n", r2, rnew, r1);

    return 0; 
}
