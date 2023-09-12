#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int x = 0, y = 0;
	printf("정수를 입력하세요: "); scanf("%d", &x);
	printf("%d을 어떤 정수로 나누시겠습니까: ",x); scanf("%d", &y);

	printf("\n%d = %d x %d + %d", x, y, x / y, x % y);
}