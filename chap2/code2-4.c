#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 2
#define NUM_INCREMENTS 10000

int counter = 0; // 共有リソース

void* increment_counter(void* ptr) {
    for (int i = 0; i < NUM_INCREMENTS; ++i) {
        counter++; // カウンタをインクリメント
    }
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];

    // スレッドを作成し、カウンタをインクリメントする
    for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_create(&threads[i], NULL, increment_counter, NULL);
    }

    // すべてのスレッドが終了するのを待つ
    for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_join(threads[i], NULL);
    }

    printf("Expected: %d, Actual: %d\n", NUM_THREADS * NUM_INCREMENTS, counter);

    return 0;
}
