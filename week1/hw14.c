#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int x = 0, y = 0, z = 0;
	int total = 0;
	double aver = 0;
	printf("첫 번째 정수를 입력해주세요: "); scanf("%d", &x);
	printf("두 번째 정수를 입력해주세요: "); scanf("%d", &y);
	printf("세 번째 정수를 입력해주세요: "); scanf("%d", &z);

	total = x + y + z;
	aver = total / 3.0;
	printf("\n세 정수의 합계는 %d입니다.", total);
	printf("\n세 정수의 평균은 %.1f입니다.", aver);
}