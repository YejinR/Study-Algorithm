#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, n;
	scanf("%d", &N);
	int count = 0;

	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		for (int j = 2; j <= n; j++) {
			if (n == j) {
				count++;
			}
			if (n % j == 0) {
				break;
			}
		}
	}

	printf("%d", count);
	return 0;
}