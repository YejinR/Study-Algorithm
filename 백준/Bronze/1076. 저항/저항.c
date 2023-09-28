#include <stdio.h>
#include <string.h>

int value(char str[]) { 
	if (!strcmp(str, "black")) { 
		return 0;
	}
	else if (!strcmp(str, "brown")) {
		return 1;
	}
	else if (!strcmp(str, "red")) {
		return 2;
	}
	else if (!strcmp(str, "orange")) {
		return 3;
	}
	else if (!strcmp(str, "yellow")) {
		return 4;
	}
	else if (!strcmp(str, "green")) {
		return 5;
	}
	else if (!strcmp(str, "blue")) {
		return 6;
	}
	else if (!strcmp(str, "violet")) {
		return 7;
	}
	else if (!strcmp(str, "grey")) {
		return 8;
	}
	else if (!strcmp(str, "white")) {
		return 9;
	}
}

int multip(char str[]) { //multip => multiplication
	if (!strcmp(str, "black")) {
		return 1;
	}
	else if (!strcmp(str, "brown")) {
		return 10;
	}
	else if (!strcmp(str, "red")) {
		return 100;
	}
	else if (!strcmp(str, "orange")) {
		return 1000;
	}
	else if (!strcmp(str, "yellow")) {
		return 10000;
	}
	else if (!strcmp(str, "green")) {
		return 100000;
	}
	else if (!strcmp(str, "blue")) {
		return 1000000;
	}
	else if (!strcmp(str, "violet")) {
		return 10000000;
	}
	else if (!strcmp(str, "grey")) {
		return 100000000;
	}
	else if (!strcmp(str, "white")) {
		return 1000000000;
	}
}

int main() {
	char color1[10], color2[10], color3[10];
	scanf("%s %s %s", &color1, &color2, &color3);
	printf("%lld", (value(color1) * 10 + value(color2)) * (long long int)multip(color3));
	return 0;
}