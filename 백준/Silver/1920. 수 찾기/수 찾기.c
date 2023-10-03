#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	
	if (num1 < num2) {
		return - 1;
	}
	if (num1 > num2) {
		return 1;
	}
	return 0;
}

int BinSearch(int A[], int N, int key) {
	int low, high;
	high = N - 1;
	low = 0;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (key == A[mid]) {
			return key;
		}
		else if (key < A[mid]) {
			high = mid - 1;
		}
		else if (key > A[mid]) {
			low = mid + 1;
		}
		else {
			return -1;
		}
	}
	return -1;
}

int main() {
	int N, M, B;
	scanf("%d\n", &N);

	int A[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	qsort(A, N, sizeof(int), compare);

	scanf("%d\n", &M);
	for (int j = 0; j < M; j++) {
		scanf("%d", &B);
		if (BinSearch(A, N, B) != -1) {
			printf("1\n");
		}
		else if (BinSearch(A, N, B) == -1) {
			printf("0\n");
		}
	}
	return 0;
}