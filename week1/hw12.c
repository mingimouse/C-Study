#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

void main(void)
{
	double r = 0;
	double area = 0;

	printf("���� �������� �Է��ϼ���: "); scanf("%lf", &r);
	printf("���� ���̴� %.2f�Դϴ�.", r * r * PI);
}