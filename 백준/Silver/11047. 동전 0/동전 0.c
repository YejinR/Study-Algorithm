#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, K;
	int A[10];
	int count = 0;
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	int a = N - 1;
	while (K > 0) {
		if (A[a] > K) {
			a--;
		}
		else {
			K = K - A[a];
			count++;
		}
	}
	printf("%d", count);
	return 0;
}