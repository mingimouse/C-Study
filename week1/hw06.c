#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int x = 0, y = 0;
	printf("x값을 입력하세요: "); scanf("%d", &x);
	printf("y값을 입력하세요: "); scanf("%d", &y);

	printf("\nx값은 y값의 %d%%입니다.", 100 * x / y);
}