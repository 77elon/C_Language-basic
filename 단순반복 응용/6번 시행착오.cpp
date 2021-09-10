#include <stdio.h>

int main()

{

	int a, b, c = 1, d = 0;
	double e = 0;

	for (a = 1, b = a; d < 19; d++)
	{

		while (c > 0)
		{
			a = a * a;
			c = d - 1;
		} 

		a = b + 2;
		e = a + b;

		printf("%lf\n", e);
	}
}