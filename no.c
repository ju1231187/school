#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	printf("정수를 입력하시오:");
	scanf("%d", &a);
	for (int b = a - 1; b >= 0; b--) {
		for (int i = 1; i <= a - b; i++) {
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}