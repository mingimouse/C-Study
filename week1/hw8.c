#include <stdio.h>
#include <math.h>

void main(void)
{
	int short_min = 0;
	int short_max = 0;
	int short_bit = 0;

	printf("short���� ũ��� %d����Ʈ �Դϴ�.\n", sizeof(short));

	short_bit = sizeof(short) * 8;
	short_min = -pow(2, short_bit - 1);
	short_max = pow(2, short_bit - 1) - 1;
	 
	printf("short���� ǥ�� ������ %d���� %d���� �Դϴ�.\n",short_min, short_max);
	printf("\n");
}