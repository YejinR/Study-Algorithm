#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int S1, S2, S3;
	int sum[100]={0, }, max = 0;
	int result;

	scanf("%d %d %d", &S1, &S2, &S3);
	for (int i = 1; i <= S1; i++) {
		for (int j = 1; j <= S2; j++) {
			for (int k = 1; k <= S3; k++) {
				sum[i + j + k]++;
			}
		}
	}
	for (int i = 2; i < S1 + S2 + S3; i++) {
		if (sum[i] > max) {
			max = sum[i];
			result = i;
		}
	}
	printf("%d", result);
	return 0;
}