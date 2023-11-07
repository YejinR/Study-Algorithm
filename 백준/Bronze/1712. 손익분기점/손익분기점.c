#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C;
	int s; //판매량

	scanf("%d %d %d", &A, &B, &C);

	s = A / (C - B) + 1;

	if (B >= C) {
		printf("-1\n");
	}
	else {
		printf("%d\n", s);
	}
	return 0;
}