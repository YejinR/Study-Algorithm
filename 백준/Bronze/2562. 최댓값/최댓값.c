#include <stdio.h>

int main() {
	int arr[9];
	int max;
	int index = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];

	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	printf("%d\n%d", max, index + 1);
}