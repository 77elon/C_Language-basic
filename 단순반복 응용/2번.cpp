#include<stdio.h>

int main()

{
	int x = 1, y = 0, i = 0;

	while (i < 100)
	{
		if (x % 2 == 1)
		{
			y = y + x;
		}
		x++;
		i++;
	}
	printf("%d\n", y);
}