#include <stdio.h>

int main(void)
{
    int x;
    double r1, r2, rnew, diff;

    printf("Enter a positive integer: "); scanf("%d", &x);
    if (x <= 0) {
        printf("Input error!\n");
        return -1;
    }
    rnew = x;
    diff = rnew - x/rnew;
 
    while (diff > 1.0E-5) {
        r1 = rnew; r2 = x/r1; rnew = (r1 + r2)/2;
        diff = r1 > r2 ? r1 - r2 : r2 - r1;
        printf("%7.5f < %7.5f < %7.5f\n", r2, rnew, r1);
    }

    return 0; 
}
