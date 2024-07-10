#include <stdio.h>
#define STR_LEN 15

int main(void)
{
    char str[STR_LEN] = "example string";
    str[0] = 'E';
    str[8] = 'S';
    printf("%s\n", str);

    return 0; 
}
