#include <stdio.h>

int input_number(void)
{
    int x;
    do {
        printf("Enter a positive integer: "); scanf("%d", &x);
        if (x <= 0) {
            printf("Input error!\n");
            continue;
        }
        break;
    } while(1);
    return x; 
}

double square_root(double x)
{
    double r1, r2;
    double rnew = x;
    double diff = rnew - x/rnew;
    while (diff > 1.0E-5) {
        r1 = rnew; r2 = x/r1; rnew = (r1 + r2)/2;
        diff = r1 > r2? r1 - r2: r2 - r1;
    }
    return rnew; 
}

int main(void)
{
    int x = input_number();
    double sq = square_root((double) x);
    printf("Square root of %d is %7.5f\n", x, sq);
    return 0; 
}
