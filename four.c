#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int birthYear, currentYear, age;
    printf("���� �⵵�� �Է��ϼ���: ");
    scanf("%d", &currentYear);


    printf("�¾ �⵵�� �Է��ϼ���: ");
    scanf("%d", &birthYear);


    age = currentYear - birthYear;

  
    printf("����� ���̴� %d���Դϴ�.\n", age);

    return 0;
}