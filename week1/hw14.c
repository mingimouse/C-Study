#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int x = 0, y = 0, z = 0;
	int total = 0;
	double aver = 0;
	printf("ù ��° ������ �Է����ּ���: "); scanf("%d", &x);
	printf("�� ��° ������ �Է����ּ���: "); scanf("%d", &y);
	printf("�� ��° ������ �Է����ּ���: "); scanf("%d", &z);

	total = x + y + z;
	aver = total / 3.0;
	printf("\n�� ������ �հ�� %d�Դϴ�.", total);
	printf("\n�� ������ ����� %.1f�Դϴ�.", aver);
}