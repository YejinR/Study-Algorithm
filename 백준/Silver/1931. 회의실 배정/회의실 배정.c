#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Meeting {
	int start, end;
}Meeting;

Meeting arr[100001];

int compare(const void* a, const void* b) {
	Meeting n1 = *(Meeting*)a;
	Meeting n2 = *(Meeting*)b;

	if (n1.end > n2.end) {
		return 1;
	}
	else if (n1.end == n2.end) {
		if (n1.start > n2.start) {
			return 1;
		}
		else {
			return -1;
		}
	}
	else {
		return 0;
	}
}

int main() {
	int N;
	int count = 0;
	int temp = 0;

	scanf("%d", &N);

	for (int i = 0; i < N ; i++) {
		scanf("%d %d", &arr[i].start, &arr[i].end);
	}

	qsort(arr, N, sizeof(Meeting), compare);

	for (int i = 0; i < N; i++) {
		if (arr[i].start >= temp) {
			temp = arr[i].end;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}