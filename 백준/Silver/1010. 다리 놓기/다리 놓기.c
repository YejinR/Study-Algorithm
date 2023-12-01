#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

double combination(int N, int M) {
	if (M == 0 || M == N) {
		return 1;
	}
	return factorial(N) / (factorial(M) * factorial(N - M));
}

int main() {
	int T;
	scanf("%d", &T);

	int N, M;

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		printf("%.f\n", combination(M, N));
	}
	return 0;
}