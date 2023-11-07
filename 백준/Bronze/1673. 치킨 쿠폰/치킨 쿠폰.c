#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k;
	int count = 0;
	int point = 0;

	while (scanf("%d %d", &n, &k) != EOF) {
		if (k > 1 && k <= n) {
			count = n;
			while (n >= k) {
				point = n % k;
				n = n / k;
				count += n;
				n += point;
			}
			printf("%d\n", count);
		}

	}

}