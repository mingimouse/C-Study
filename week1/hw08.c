#include <stdio.h>
#include <math.h>

void main(void)
{
	int short_min = 0;
	int short_max = 0;
	int short_bit = 0;

	printf("short형의 크기는 %d바이트 입니다.\n", sizeof(short));

	short_bit = sizeof(short) * 8;
	short_min = -pow(2, short_bit - 1);
	short_max = pow(2, short_bit - 1) - 1;
	 
	printf("short형의 표현 범위는 %d에서 %d까지 입니다.\n",short_min, short_max);
	printf("\n");
}