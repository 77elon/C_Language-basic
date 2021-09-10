#include <stdio.h>

int main()

{
	int year;
	double money = 10000, sum = 0, result;
	for (year = 0; year < 10; year++)
	{
		money = money + (money * 0.045);
		result = money;
		printf("%lf\n", result);
	}
}