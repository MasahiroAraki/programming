#include <stdio.h>
#include <stdlib.h>

typedef struct dict {
    int data;
    struct dict *next;
} Dict;

int main(void)
{
    Dict *first = malloc(sizeof(Dict));
    first->data = 5;
    Dict *second = malloc(sizeof(Dict));
    first->next = second;
    second->data = 8;
    second->next = NULL;
    return 0; 
}
