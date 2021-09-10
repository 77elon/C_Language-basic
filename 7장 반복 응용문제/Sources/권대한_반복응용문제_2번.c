#include<stdio.h>

int main()

{
	int a, b;

	for (a = 1; a < 11; a++)
	{
		for (b = 1; b < 11; b++)
		{
			if (a + b == 11)
			{
				printf("first : %d, second : %d\n", a, b);
			}
		}
	}

}