#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int M, N;
	scanf("%d %d", &M, &N);

	int sum = 0, min = 10000;
	int a[10001];

	for (int i = 0; i < N; i++) {
		a[i] = i* i;
		if (M <= a[i] && a[i] <= N) {
			sum += a[i];
			if (min > a[i]) {
				min = a[i];
			}
		}
	}
	if (sum == 0){
		printf("-1");
	}
	else {
		printf("%d\n%d", sum, min);
	}

}