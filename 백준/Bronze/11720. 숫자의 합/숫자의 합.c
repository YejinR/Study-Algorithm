#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	char arr[100];
	int sum = 0;

	scanf("%s", arr);

	for (int i = 0; i < N; i++) {
		sum += arr[i] - '0';
	}
	printf("%d", sum);
}