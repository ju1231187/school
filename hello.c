#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
	int hour, min, sec;
	hour = min = sec = 0;
	while (1) {
		system("cls");
		printf("%02d: %02d: %02d", hour, min, sec);
		sec++;
		if (sec == 60) {
			min++; 
			sec = 0;
		}
		if (min == 60) {
			hour++;
			min = 0;
		}
		if (hour == 24) {
			hour = min = sec = 0;
		}
		Sleep(1000);
	}
	return 0;
}