#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int x = 0, y = 0;
	printf("������ �Է��ϼ���: "); scanf("%d", &x);
	printf("%d�� � ������ �����ðڽ��ϱ�: ",x); scanf("%d", &y);

	printf("\n%d = %d x %d + %d", x, y, x / y, x % y);
}