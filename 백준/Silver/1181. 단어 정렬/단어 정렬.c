#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* arg1, const void* arg2) {
	if (strlen((const char*)arg1) > strlen((const char*)arg2)) {
		return 1;
	}
	else if (strlen((const char*)arg1) < strlen((const char*)arg2)) {
		return -1;
	}
	else {
		return strcmp((char*)arg1, (char*)arg2);
	}
}

int main() {
	int N;
	char A[20000][51] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", A[i]);
	}
	qsort(A, N, sizeof(A[0]), compare);
	for (int j = 0; j < N; j++) {
		if (strcmp(A[j], A[j + 1]) != 0 || j == N - 1) {
			printf("%s\n", A[j]);
		}
	}
	return 0;
}