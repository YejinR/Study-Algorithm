#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1001];
int map[1001];

void dfs(int i) {
	if (map[i]) {
		return;
	}
	map[i] = 1;
	dfs(arr[i]);
}

int main() {
	int T, N;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int j =1; j <= N; j++) {
			scanf("%d", &arr[j]);
			map[j] = 0;
		}

		int count = 0;
		for (int j = 1; j <= N; j++) {
			if (map[j] == 0) {
				dfs(j);
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}