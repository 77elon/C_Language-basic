#include <stdio.h>

int main()

{
	int a, b = 0, d = 1,e = 0, f = 0;
	
	double sum = 0;

	for (a = 1; d < 10;)
	{
		f = e;
		b = a;
		
		while (f > 0) 
		{
			a = a * b;
			f = f - 1;
		}
		sum = sum + a;
		a = b + 2;
		d++;
		e++;
		printf("%lf\n", sum);
			}


}