#include <stdio.h>

int main()

{

	double a, b = 2;
	double e = 0 , sum = 0;
	for (a = 1; a < 10; a++)
	{
			e = a / b;
			if (a == 2 && b == 3)
			{
				sum = sum - e;

			}
			else if (a == 4 && b == 5)
			{
				sum = sum - e;
			}
			else if (a == 1 && b == 2)
			{
				sum = sum + e;
			}
			else if (a == 3 && b == 4)
			{
				sum = sum + e;
			}
			else
			{
				sum = sum + e;
			}
			b++;
	}
	printf("%lf\n", sum);
}