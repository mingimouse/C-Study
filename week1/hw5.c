#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int min = 0;
	printf("������ �Է����ּ���: "); scanf("%d", &min);
	printf("\n%d�� = %d�ð� %d��", min, min / 60, min % 60);
}