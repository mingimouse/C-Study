#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	double height = 0, weight = 0, bmi = 0;
	printf("Ű(cm)�� �Է��ϼ���: "); scanf("%lf", &height);
	printf("������(kg)�� �Է��ϼ���: "); scanf("%lf", &weight);
	
	bmi = weight / ((height / 100) * (height / 100));
	printf("BMI�� %.2f�Դϴ�.", bmi);
}