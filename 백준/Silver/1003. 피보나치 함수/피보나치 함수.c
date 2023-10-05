#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int N) {
	int last = 0;
	int result = 0;
	int current = 1;
	for (int i = 0; i <= N; i++) {
		last = current;
		current = result;
		result = last + current;
	}
	printf("%d %d\n", last, current);
}

int main() {
	int T, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		fib(N);
	}
	return 0;
}