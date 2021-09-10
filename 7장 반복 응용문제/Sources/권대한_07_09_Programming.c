#include <stdio.h>

int main()

{
	int a, b;

	for (a = 1, b = 0; b < 10000; a++)
	{

		if (b < 10000)
		{
			b = b + a;
		}
	}
	a--;
	b = b - a;
	printf("%d 부터 %d까지의 합이 %d입니다.\n", a / a, a - 1, b);
}