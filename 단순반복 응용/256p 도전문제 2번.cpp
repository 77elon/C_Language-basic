#include <stdio.h>

int main()

{
	double paper = 100, amount;
	int divide = 1;

	for (paper = 100, amount = paper; amount > paper / 100; divide++)
	{
		amount = amount / 2;
		printf("%d번 후 %lf\n", divide, amount);

	}
}