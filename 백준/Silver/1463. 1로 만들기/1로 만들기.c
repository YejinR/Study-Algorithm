#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN(a, b) a < b ? a : b


int main() {
	int N;
	scanf("%d", &N);
	int arr[1000001] = { 0 };

	arr[1] = 0;
	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0) {
			arr[i] = (MIN(arr[i], arr[i / 3] + 1));
		}
		if (i % 2 == 0) {
			arr[i] = (MIN(arr[i], arr[i / 2] + 1));
		}
	}
	printf("%d", arr[N]);
	return 0;
}
