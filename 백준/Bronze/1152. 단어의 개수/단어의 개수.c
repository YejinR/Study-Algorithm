#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char S[1000000];
	int count = 0;
	int len;

	scanf("%[^\n]s", S); //Enter 나오기 전까지 입력받는다는 의미
	len = strlen(S);


	if (len == 1 && S[0] == ' ') {
		printf("%d", count);
		return 0;
	} // 공백 문자 하나만 입력시 0으로 출력

	for (int i = 1; i < len-1 ; i++) {
		if (S[i] == ' ') {
			count++;
		}
	}

	printf("%d", count + 1);
	return 0;
	
}