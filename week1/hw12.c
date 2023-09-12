#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

void main(void)
{
	double r = 0;
	double area = 0;

	printf("원의 반지름을 입력하세요: "); scanf("%lf", &r);
	printf("원의 넓이는 %.2f입니다.", r * r * PI);
}