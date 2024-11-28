#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int birthYear, currentYear, age;
    printf("현재 년도를 입력하세요: ");
    scanf("%d", &currentYear);


    printf("태어난 년도를 입력하세요: ");
    scanf("%d", &birthYear);


    age = currentYear - birthYear;

  
    printf("당신의 나이는 %d살입니다.\n", age);

    return 0;
}