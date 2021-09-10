#include <stdio.h>

int main()

{

	unsigned int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c && a >= c)
	{
		printf("%d %d", a - b, b - c);
	}
	else if (a >= b && b <= c && a >= c)
	{
		printf("%d %d", a - c, c - b);
	}
	else if (a >= b && a <= c && b <= c)
	{
		printf("%d %d", c - a, a - b);
	}
	else if (a <= b && a <= c && b >= c)
	{
		printf("%d %d", b - c, c - a);
	}
	else if (a <= b && a <= c && c >= b)
	{
		printf("%d %d", c - b, b - a);
	}
	else if (a <= b && a >= c && b >= c)
	{
		printf("%d %d", b - a, a - c);
	}
}