#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	char LN[30]; //LN: Last Name
	int arr[27] = { 0, }; //알파벳 수 + 1
	int count = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", LN);
		arr[LN[0] - 97]++; //a의 ASCII code 번호가 97
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			printf("%c", i + 'a');
			count = 1;
		}
	}
	if (count == 0) {
		printf("PREDAJA");
	}
}