#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char C[9];
	
	while (scanf("%s", C) != '#') {
		if (C[0] == '#') {
			break;
		}
		int length = strlen(C);
		int i = 0;
		int result = 0;
		int e;//8진법 자릿수 값

		while (length != 0) {
			char str = C[i];
			switch (str) {
			case '-':
				e = 0;
				break;
			case '\\':
				e = 1;
				break;
			case '(':
				e = 2;
				break;
			case '@':
				e = 3;
				break;
			case '?':
				e = 4;
				break;
			case '>':
				e = 5;
				break;
			case '&':
				e = 6;
				break;
			case '%':
				e = 7;
				break;
			case '/':
				e = -1;
				break;
			}
			result += e * pow(8, length - 1);
			length--;
			i++;
		}
		printf("%d\n", result);
	}
	return 0;
}
