#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int a = 0, b = 0, h = 0;
	double area = 0;
	printf("������ ���̸� �Է��ϼ���: "); scanf("%d", &a);
	printf("�Ʒ����� ���̸� �Է��ϼ���: "); scanf("%d", &b);
	printf("���̸� �Է��ϼ���: "); scanf("%d", &h);
	area = (a + b) * h / 2.0;
	printf("\n��ٸ����� ���̴� %.1f�Դϴ�.", area);
}