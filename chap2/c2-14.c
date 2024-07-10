#include <stdio.h>
#define NUM 5
#define NAME_LEN 9

typedef struct {
    int score;
    char name[NAME_LEN];
} Student;

int main(void)
{
    Student table[NUM] = {
        {80, "Alice"},
        {65, "Bob"},
        {70, "Caroline"},
        {93, "David"},
        {77, "Eve"}
    };

    for(int i=0; i<NUM; i++)
        printf("id: %d name: %-9s  score: %d\n", i, table[i].name, table[i].score);

    return 0; 
}
