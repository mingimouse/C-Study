#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int x = 0, y = 0;
	printf("x���� �Է��ϼ���: "); scanf("%d", &x);
	printf("y���� �Է��ϼ���: "); scanf("%d", &y);

	printf("\nx���� y���� %d%%�Դϴ�.", 100 * x / y);
}