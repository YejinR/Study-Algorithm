#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int map[101][101] = { 0, };
int visit[101] = { 0 };
int count = 0;


void dfs(int v, int n) {
	visit[v] = 1;
	count++;
	for (int i = 1; i <= n; i++) {
		if (map[v][i] == 1 && visit[i] == 0) {
			dfs(i, n);
		}
	}
}

int main() {
	int Ccnt, Tc;
	scanf("%d %d", &Ccnt, &Tc);
	for (int i = 0; i < Tc; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
		map[b][a] = 1;
	}
	dfs(1, Ccnt);
	printf("%d", count-1);
	return 0;
}