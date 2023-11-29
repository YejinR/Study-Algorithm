#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define min(a, b) a < b ? a : b 
//다이나믹 프로그래밍(dp)

/*
int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
*/

int main() {
	int dp[1000001] = { 0 };
	int X;
	scanf("%d", &X);
	dp[1] = 0;

	for(int i=2; i<=X; i++){
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1); 
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
	}
	printf("%d", dp[X]);
	return 0;
}