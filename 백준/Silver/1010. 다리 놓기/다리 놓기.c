#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int qurry_n;
	int left, right;
	int arr[31][31];

	for (int i = 1; i < 31; i++) {
		arr[i][i] = 1;
		for (int j = i + 1; j < 31; j++) {
			arr[i][j] = (i == 1 ? j : arr[i][j - 1] + arr[i - 1][j - 1]);
		}
	}

	scanf("%d", &qurry_n);
	for (int i = 0; i < qurry_n; i++) {
		scanf("%d %d", &left, &right);
		printf("%d\n", arr[left][right]);
	}
	return 0;
}