#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int money = 0;
	int coin500 = 0, coin100 = 0, coin50 = 0, coin10 = 0;
	printf("�Ž������� �Է��ϼ���: "); scanf("%d", &money);

	coin500 = money / 500;
	coin100 = (money - coin500 * 500) / 100;
	coin50 = (money - coin500 * 500 - coin100 * 100) / 50;
	coin10 = (money - coin500 * 500 - coin100 * 100 - coin50 * 50) / 10;
	printf("==============================\n");
	printf("500��: %d��\n", coin500);
	printf("100��: %d��\n", coin100);
	printf("50��: %d��\n", coin50);
	printf("10��: %d��\n", coin10);
	
}