#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int map[50][50] = { 0 }, visit[50][50] = { 0 };
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int M, N, K;

void dfs(int y, int x) {
	visit[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int x_pos = x + dx[i];
		int y_pos = y + dy[i];

		if (x_pos < 0 || x_pos >= M || y_pos < 0 || y_pos >= N) continue;
		if (map[y_pos][x_pos] == 1 && visit[y_pos][x_pos] == 0) dfs(y_pos, x_pos);

	}
}
void init() {
	for (int i = 0; i < 50; i++) for (int j = 0; j < 50; j++) {
		map[i][j] = 0; visit[i][j] = 0;
	}
}
int main() {
	int T; scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int x, y, count = 0;
		init();
		count = 0;
		scanf("%d %d %d", &M, &N, &K);

		for (int j = 0; j < K; j++) { scanf("%d %d", &x, &y); map[y][x] = 1; }

		for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) {
			if (map[i][j] == 1 && visit[i][j] == 0) {
				dfs(i, j); count++;
			}
		}
		printf("%d\n", count);
	}
}