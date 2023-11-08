#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char text[30005];
	char code[30005];
	char result[30005];
	char tmp;

	gets(text);
	scanf("%s", code);

	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == ' ')
			result[i] = ' ';
		else
		{
			char tmp = text[i] - (code[i % strlen(code)] - 'a') - 1;
			if (tmp < 'a')
				tmp += 26;
			result[i] = tmp;
		}
	}

	result[strlen(text)] = '\0';
	printf("%s", result);
	return 0;
}