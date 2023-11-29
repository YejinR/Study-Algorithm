#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int N;
	int select[101];
	int result[101];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		result[i] = i + 1;
		scanf("%d", &select[i]);
		for (int j = i; j > i - select[i]; j--) {
			swap(&result[j], &result[j - 1]);
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", result[i]);
	}
	return 0;
}