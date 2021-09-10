#include <stdio.h>

void is_prime();

int main()
{

	printf("2부터 100사이의 소수를 출력합니다.\n");
	is_prime();
}

void is_prime()
{
	int i, j;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d\n", i);
		}
	}
}