#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, m, M, T, R;
	int X, minute=0;

	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

	if (m + T > M) {
		printf("-1\n");
		return 0;
	}

	X = m;


	while(N > 0){
		if (X + T <= M) {
			X += T;
			N--;
		}
		else {
			X -= R;
			if (X < m) {
				X = m;
			}
		}
		minute++;
	}

	printf("%d\n", minute);
	return 0;
}