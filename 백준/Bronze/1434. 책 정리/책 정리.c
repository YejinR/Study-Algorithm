#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M;
	int A[1001] = { 0 };
	int B[1001] = { 0 };
	int space = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < M; i++) {
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (A[i] >= B[j]) {
				A[i] -= B[j];
				B[j] = 0;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		space += A[i];
	}

	printf("%d", space);
	return 0;
}