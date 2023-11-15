#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	int num;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &num);
		
		if (num > 99 && (num * num) % 1000 == num) {
			printf("YES\n");
		}
		else if (num > 9 && (num * num) % 100 == num) {
			printf("YES\n");
		}
		else if (num > 0 && (num * num) % 10 == num) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}