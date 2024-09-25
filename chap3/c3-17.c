#include <stdio.h>

char g[] ="123";

int main(void)
{
    char s[] = "ABC";
    char* h = "XYZ";
    printf("%s  %s  %s\n", g, s, h);
    return 0; 
}
