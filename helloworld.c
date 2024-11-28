#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int days, years, weeks;
	printf("총 일수를 입력하시오:");
	scanf("%d", &days);
	years = (days / 365);
	weeks = (days % 365) / 7;
	days = days - ((years * 365) + (weeks * 7));
	printf("%d년", years);
	printf("%d주", weeks);
	printf("%d일", days);

	return 0;
}
