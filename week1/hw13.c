#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int a = 0, b = 0, h = 0;
	double area = 0;
	printf("윗변의 길이를 입력하세요: "); scanf("%d", &a);
	printf("아랫변의 길이를 입력하세요: "); scanf("%d", &b);
	printf("높이를 입력하세요: "); scanf("%d", &h);
	area = (a + b) * h / 2.0;
	printf("\n사다리꼴의 넓이는 %.1f입니다.", area);
}