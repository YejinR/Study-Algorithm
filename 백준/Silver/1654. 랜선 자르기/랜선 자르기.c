#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int K, N;
	long long first = 1, last = 0, mid;
	long long line[10001] = { 0, };
	int result = 0, sum = 0;
	scanf("%d %d", &K, &N); //K<=N

	for (int i = 0; i < K; i++) {
		scanf("%d", &line[i]);
		last = last < line[i] ? line[i] : last;
	}
	while (first <= last) {
		mid = (first + last) / 2;
		int sum = 0;
		for (int i = 0; i < K; i++) {
			sum += (line[i] / mid);
		}
		if (sum < N) {
			last = mid - 1;
		}
		else if (sum >= N) {
			first = mid + 1;
			result = result < mid ? mid : result;
		}
	}
	printf("%lld", result);
	return 0;
}