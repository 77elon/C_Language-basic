#include <stdio.h>

int get_integer();
int combination(int n, int r);
long factorial(int n);

int main()

{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d \n", a, b, combination(a, b));
	return 0;

}

int get_integer()
{
	int n;
	printf("양수를 입력하시오 :");
	while (1) 
	{
		scanf("%d", &n);
		getchar();
		if (n >= 0)
		{
			return n;
			break;
		}
		else if (n < 0)
		{
			printf("잘못된 값 입력입니다.");
		}
	}
}

int combination(int n, int r)
{
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}

long factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; n > 0 , i <= n; i++)
	{
		result *= i;
	}
	return result;
}
