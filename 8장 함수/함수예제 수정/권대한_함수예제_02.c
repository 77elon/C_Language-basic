#include <stdio.h>

int is_prime(int n);
int get_integer();

int main()
{
	int n, result;

	n = get_integer();
	result = is_prime(n);

	if (result == 1)
	{
		printf("%d는 소수입니다.\n", n);
	}
	else if (result == 0)
	{
		printf("%d는 소수가 아닙니다.\n", n);
	}
	return 0;
}

int is_prime(int n)
{

	int divisors = 0, i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			divisors = 1;
		}
		if (n %i != 0)
		{
			divisors = 0;
			break;
		}
	}
	return divisors;
}

int get_integer()
{
	int n;

	while (1)
	{
		printf("양수를 입력하시오 :");
		scanf("%d", &n);
		if (n > 0)
		{
			return n;
			break;
		}
		else if (n <= 0)
		{
			printf("양수가 아닙니다.\n");
		}
	}
}
