#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	char c;
	printf("대문자 1개를 입력하세요: "); scanf("%c", &c);
	printf("%c를 소문자로 바꾸면 %c입니다.", c, c + 32);
}