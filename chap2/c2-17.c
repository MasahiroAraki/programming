#include <stdio.h>
#define NUM 5
#define NAME_LEN 9

typedef struct {
   int score;
   char name[NAME_LEN];
} Student;

int main(void)
{
    FILE *fp;
    Student table[NUM];

    if ((fp = fopen("data.csv", "r")) == NULL) {
        fprintf(stderr, "ファイルオープン失敗\n");
        return -1;
    }
    
    for(int i=0; i<NUM; i++)
        fscanf(fp, "%d,%s", &table[i].score, table[i].name);
    fclose(fp);

    for (int i=0; i<NUM-1; i++)
        for (int j=NUM-1; j>i; j--)
            if (table[j-1].score < table[j].score) {
                Student tmp = table[j];
                table[j] = table[j-1];
                table[j-1] = tmp;
            }

    for(int i=0; i<NUM; i++)
        printf("name: %-9s  score: %d\n", table[i].name, table[i].score);
    return 0;
}
