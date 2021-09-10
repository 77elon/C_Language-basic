#include <stdio.h>

void save(int amount);
int menu();

int main()
{
	save(menu());
}

int menu()
{
	int a;
	printf("메뉴를 선택하세요 : 저축(1), 인출(2)\n");
	scanf("%d", &a);
	return a;
}

void save(int amount)
{
	int money, real_money = 5000;
	if (amount == 1)
	{
		printf("저축할 금액 :");
		scanf("%d", &money);
		printf("현재 잔액은 %d입니다.\n", real_money + money);
	}
	if (amount == 2)
	{
		printf("인출할 금액 :");
		scanf("%d", &money);
		printf("현재 잔액은 %d입니다.\n", real_money - money);
	}
}

