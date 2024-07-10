#include <stdio.h>
#define NUM 5
#define NAME_LEN 9

int main(void)
{
    int no;
    char name[NUM][NAME_LEN] = {"Alice", "Bob", "Caroline", "David", "Eve"};
    printf("Student number? (0-%d): ", NUM - 1);
    scanf("%d", &no);
    printf("Name: %s\n", name[no]);
    printf("The first character of this Name is: %c\n", name[no][0]);

    return 0; 
}