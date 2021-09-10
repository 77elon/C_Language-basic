#include <stdio.h>

int main(void)
{
	short year;
	int sale;
	long total_sale;
	long long large_value;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	printf("total_sale = %d\n", total_sale);
	return 0;
}