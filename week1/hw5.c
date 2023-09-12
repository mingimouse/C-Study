#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int min = 0;
	printf("정수를 입력해주세요: "); scanf("%d", &min);
	printf("\n%d분 = %d시간 %d분", min, min / 60, min % 60);
}