#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, C;
    scanf("%d %d", &N, &C);

    int P[20001]; // 주기
    for (int i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }

    int count = 0;
    for (int i = 1; i <= C; i++) {
        for (int j = 0; j < N; j++) {
            if (i % P[j] == 0) {
                count++;
                break;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}