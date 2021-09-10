#include <stdio.h>

int main()

{
	int x = 0;

	scanf("%d", &x);
	if (x % 2 == 0)
	{
		x = x / 2;
	}
	else if (x % 2 == 1)
	{
		x = (x * 3) + 1;
	}
	printf("%d", &x);
}