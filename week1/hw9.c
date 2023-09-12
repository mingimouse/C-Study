#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	char c = 0;
	printf("문자를 입력하시오: "); scanf("%c", &c);
	printf("%c의 아스키 코드는 %d입니다.", c, c);
}