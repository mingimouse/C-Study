#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	double height = 0, weight = 0, bmi = 0;
	printf("키(cm)를 입력하세요: "); scanf("%lf", &height);
	printf("몸무게(kg)를 입력하세요: "); scanf("%lf", &weight);
	
	bmi = weight / ((height / 100) * (height / 100));
	printf("BMI는 %.2f입니다.", bmi);
}