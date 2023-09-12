#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int money = 0;
	int coin500 = 0, coin100 = 0, coin50 = 0, coin10 = 0;
	printf("거스름돈을 입력하세요: "); scanf("%d", &money);

	coin500 = money / 500;
	coin100 = (money - coin500 * 500) / 100;
	coin50 = (money - coin500 * 500 - coin100 * 100) / 50;
	coin10 = (money - coin500 * 500 - coin100 * 100 - coin50 * 50) / 10;
	printf("==============================\n");
	printf("500원: %d개\n", coin500);
	printf("100원: %d개\n", coin100);
	printf("50원: %d개\n", coin50);
	printf("10원: %d개\n", coin10);
	
}