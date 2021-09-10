#include <stdio.h>

int main()

{
	int a = 1, b = 0, sum = 0;

	while (b < 100)
	{
		b = a;
		sum = sum + a;
		a++;
	}
	printf("%d\n", sum);
}