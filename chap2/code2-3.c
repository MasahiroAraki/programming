#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LEN 9

typedef struct student {
    int score;
    char name[NAME_LEN];
    struct student *next;
} Student;

Student* add_data(int sc, char *nm) {
    Student *s = malloc(sizeof(Student));
    s->score = sc;
    strncpy(s->name, nm, NAME_LEN-1);
    s->next = NULL;
    return s;
}

int main(void)
{
    Student *head = NULL, *tail = NULL;
    FILE *fp;
    int sc;
    char nm[NAME_LEN];

    if ((fp = fopen("data.csv", "r")) == NULL) {
        fprintf(stderr, "ファイルオープン失敗\n");
        return -1;
    }

    while (fscanf(fp, "%d, %s", &sc, nm) == 2) {
        if (head == NULL) {
            head = add_data(sc, nm);
            tail = head;
        } else {
            tail->next = add_data(sc, nm);
            tail = tail->next;
        }
    }
    fclose(fp);

    // 読み込んだデータの表示
    for(Student *p = head; p != NULL; p = p->next)
        printf("name: %-9s  score: %d\n", p->name, p->score);

    // メモリの解放
    Student *tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}
