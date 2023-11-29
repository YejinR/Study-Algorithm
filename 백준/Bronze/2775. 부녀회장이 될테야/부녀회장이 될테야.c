#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int T;
	int a, b;
	int arr[15][15] = { 0 };

	for (int i = 0; i < 15; i++) {
		arr[0][i] = i;
	}

	for (int i = 1; i <15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", arr[a][b]);
	}

	return 0;
}