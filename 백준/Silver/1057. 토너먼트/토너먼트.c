#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, Kim, Lim;
	int count = 0;
	scanf("%d %d %d", &N, &Kim, &Lim);
	while (Kim != Lim) {
		Kim = (Kim + 1) / 2;
		Lim = (Lim + 1) / 2;
		count++;
	}
	printf("%d", count);
	return 0;
}