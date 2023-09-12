#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int year = 0, month = 0, day = 0;
	printf("태어난 년도를 입력하세요: "); scanf("%d", &year);
	printf("태어난 달을 입력하세요: "); scanf("%d", &month);
	printf("태어난 일을 입력하세요: "); scanf("%d", &day);

	printf("\n당신의 생년월일은 %d년 %d월 %d일 입니다.", year, month, day);
}