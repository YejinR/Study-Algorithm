#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int count = 1;;
	int x = 1;

	while (1) {
		if (N - x <= 0) {
			break;
		}
		N -= x;
		x = count * 6;
		count++;
	}
	printf("%d", count);
	return 0;
}