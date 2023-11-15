#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, N;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);

		if (N > 99 && (N * N) % 1000 == N) {
			printf("YES\n");
		}
		else if (N > 9 && (N * N) % 100 == N) {
			printf("YES\n");
		}
		else if (N > 0 && (N * N) % 10 == N) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}