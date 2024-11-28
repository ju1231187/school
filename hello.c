#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, i, j, result[10][10];
	int c[10][10];
	int c2[10][10];
	printf("행 개수:");
	scanf("%d", &a);
	printf("열 개수:");
	scanf("%d", &b);
	printf("첫 번째 행렬 입력=\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			scanf("%d", &c[i][j]);
		}
	}
	printf("두 번째 행렬 입력=\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			scanf("%d", &c2[i][j]);
		}
	}
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			result[i][j] = 0;
			for (int k = 0; k < b; k++) {
				result[i][j] += c[i][k] * c2[k][j];
			}
		}
	}
	printf("두 행의 곱\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
