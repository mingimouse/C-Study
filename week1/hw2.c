#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int year = 0, month = 0, day = 0;
	printf("�¾ �⵵�� �Է��ϼ���: "); scanf("%d", &year);
	printf("�¾ ���� �Է��ϼ���: "); scanf("%d", &month);
	printf("�¾ ���� �Է��ϼ���: "); scanf("%d", &day);

	printf("\n����� ��������� %d�� %d�� %d�� �Դϴ�.", year, month, day);
}