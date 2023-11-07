#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int K = 0;
	int time = 0;
	scanf("%d", &N);

	while (1) {
		K++;
		if (N == 0) {
			break;
		}
		if (N < K) {
			K = 1;
		}
		N -= K;
		time++;
	}
	printf("%d\n", time);
	return 0;
}