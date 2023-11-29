#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) {
		return -1;
	}
	if (num1 > num2) {
		return 1;
	}
	else{
		return 0;
	}

}

int main() {
	int num[5];
	int sum = 0;
	int average, median;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
	}
	average = sum / 5;
	qsort(num, 5, sizeof(int), compare);
	printf("%d\n%d", average, num[2]);
	return 0;
}