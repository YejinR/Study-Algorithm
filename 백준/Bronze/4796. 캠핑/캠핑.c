#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int P, L, V;
	int max = 0;

	

	for (int i = 0;; i++) {
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0 && P == 0 && V == 0) {
			break;
		}
		max =  V / P * L + (V % P < L ? V % P : L);
		printf("Case %d: %d\n",i+1, max);
	}
	return 0;
}