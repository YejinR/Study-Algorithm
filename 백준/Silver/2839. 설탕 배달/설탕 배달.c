#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	//봉지는 3kg or 5kg

	int count = 0;

	while (N > 0) {
		if (N % 5 == 0) {
			count += 1;
			N -= 5;
		}
		else {
			count += 1;
			N -= 3;
		}
	}

	if (N != 0 || count == 0){
		printf("-1");
	}
	else {
		printf("%d", count);
	}
	return 0;
}