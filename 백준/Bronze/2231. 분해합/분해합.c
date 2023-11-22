#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int sum;
	int i = 1;
	while (i <= N) {
		int a = i;
		sum = i;
		while (a > 0) {
			sum = sum + a % 10;
			a = a / 10;
		}
		if (sum == N) {
			printf("%d", i);
			break;
		}
		if (i == N) {
			printf("0");
			break;
		}
		i++;
	}
	return 0;
}