#include <stdio.h>

int main()

{
	int x = 0, y = 0, z = 0, q = 0, money = 0;
	int w = 0, e = 0, r = 0, t = 0;
	scanf("%d", &money);

	w = money % 500;
	e = money % 100;
	r = money % 50;
	t = money % 10;

	x = money / 500;
	y = w / 100;
	z = e / 50;
	q = r / 10;

	printf("500원은 %d\n", x);
	printf("100원은 %d\n", y);
	printf("50원은 %d\n", z);
	printf("10원은 %d\n", q);

}