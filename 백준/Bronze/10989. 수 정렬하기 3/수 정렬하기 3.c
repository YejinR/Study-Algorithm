#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N;
	int num;

	int count[10001] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		count[num] = count[num] + 1;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 1; j <= count[i]; j++) {
			printf("%d\n", i);
		}
	}


	return 0;
}