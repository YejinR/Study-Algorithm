#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define minFinder(a,b) a < b ? a : b

int main() {
	char arr[50][50];
	int M, N;
	int B=0, W=0;
	int min = 80;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%s", &arr[i]);
	}

	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			B = 0;
			W = 0;
			for (int a = i; a < i + 8; a++) {
				for (int b = j; b < j + 8; b++) {
					if ((a + b) % 2 == 0) {
						if (arr[a][b] == 'B')
							W++;
						else
							B++;
					}
					else {
						if (arr[a][b] == 'B')
							B++;
						else
							W++;
					}

				}

			}
			min = minFinder(min, B);
			min = minFinder(min, W);
		}
	}
	printf("%d\n", min);
	return 0;
}