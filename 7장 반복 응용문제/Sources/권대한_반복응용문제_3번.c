#include <stdio.h>

int main()

{
	int a, b, c, n = 1;

	for (a = 2; a <= 20; a++)
	{
		if (a % 2 == 0)
		{
			for (b = 3; b <= 30; b++)
			{
				if (b % 3 == 0)
				{
					for (c = 5; c <= 50; c++)
					{
						if (c % 5 == 0)
						{
							if (a + b + c == 81)
							{
								printf("first : %d, second : %d, third : %d \n", a, b, c);
							}
						}
					}
				}
			}
		}
	}
}