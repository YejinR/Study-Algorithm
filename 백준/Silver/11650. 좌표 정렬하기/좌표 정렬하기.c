#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}Pos; //좌표 구조체......

int compare(const void* ptr1, const void* ptr2) {
	Pos* p1 = (Pos*)ptr1;
	Pos* p2 = (Pos*)ptr2;

	if (p1->x < p2->x) {
		return -1;
	}
	else if (p1->x > p2->x) {
		return 1;
	}
	else {
		if (p1->y < p2->y) {
			return -1;
		}
		else if (p1->y > p2->y) {
			return 1;
		}
	}
	return 0;
}


int main() {
	int N;
	scanf("%d", &N);
	Pos* arr = (Pos*)malloc(sizeof(Pos) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	qsort(arr, N, sizeof(Pos), compare);

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	free(arr);

}