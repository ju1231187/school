#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, i, j, result[10][10];
	int c[10][10];
	int c2[10][10];
	printf("�� ����:");
	scanf("%d", &a);
	printf("�� ����:");
	scanf("%d", &b);
	printf("ù ��° ��� �Է�=\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			scanf("%d", &c[i][j]);
		}
	}
	printf("�� ��° ��� �Է�=\n");
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
	printf("�� ���� ��\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}