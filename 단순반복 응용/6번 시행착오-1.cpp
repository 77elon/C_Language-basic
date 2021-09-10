#include <stdio.h>

int main()

{
	int a, b = 0, d = 1, e, f = 1, z=0, x=0;

	double sum = 0;

	for (a = 1; a <= 19; f++)
	{
		z = z + 1;
		b = a;
		e = f;
		for (x = 1; x < z;) {
			a = a * b;
			e = f - 1;
			printf("%d\n", a);

		}

		sum = sum + a;
		a = b + 2;
		d++;
	}
	//printf("%lf\n", sum);

}