#include <stdio.h>
#include <pthread.h>
#define NUM_THREADS 10000
int counter = 0; // グローバル変数としてカウンタを定義

void* increment_counter(void *arg) {
    counter++; // スレッド安全でないカウントアップ
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, increment_counter, NULL);
    }
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("Result: %d\n", counter);
    return 0;
}
