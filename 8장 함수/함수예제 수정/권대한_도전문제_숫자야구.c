#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void check_numbers(int a, int b, int c, int num1, int num2, int num3);

int main()
{
	int a, b, c;
	int n, number;
	int num1 = 0, num2 = 0, num3 = 0;

	srand((unsigned)time(NULL));


	for (;num1 == num2 || num2 == num3 || num1 == num3;)
	{
		num1 = rand() % 10;
		num2 = rand() % 10;
		num3 = rand() % 10;
	}
	printf("야구 게임!!!\n");
	printf("%d%d%d\n", num1, num2, num3);
	for (n = 0; ; n++)
	{
		printf("숫자를 입력하시오!!\n");
		scanf("%d", &number);
		a = (number / 100) % 10;
		b = (number / 10) % 10;
		c = number % 10;
		check_numbers(a, b, c, num1, num2, num3);
	}

}

void check_numbers(int a, int b, int c, int num1, int num2, int num3)
{
	if (a == num1 && b == num2)
	{
		if (c == num3)
		{
			printf("3Strike!!\n");
		}
	}
	if (a == num1 && c == num3)
	{
		if (b != num2)
		{
			printf("2Strike!!\n");
		}
	}
	else if (a == num1 && b == num3)
	{
		if (c == num2)
		{
			printf("1Strike!! 2Ball!! \n");
		}
		if (c != num2)
		{
			printf("1Strike!! 1Ball\n");
		}
	}
	else if (a == num1 && c == num2)
	{
		if (b == num3)
		{
			printf("1Strike!! 2Ball!!\n");
		}
		else if (b != num3)
		{
			printf("1Strike!! 1Ball\n");
		}
	}
	if (a == num3 && b == num1)
	{
		if (c == num2)
		{
			printf("3Ball!!\n");
		}
		if (c != num2)
		{
			printf("2Ball!!\n");
		}
	}
	if (a == num2 && b == num3)
	{
		if (c == num1)
		{
			printf("3Ball!!\n");
		}
		if (c != num1)
		{
			printf("2Ball!!\n");
		}
	}

	if (a == num1 && b != num2 && b != num3 && c != num2&& c != num3)
	{
		printf("1Strike!!\n");
	}
	if (b == num2 && c == num3)
	{
		if (a != num1)
		{
			printf("2Strike!!\n");
		}
	}
	else if (b == num2 && a == num1)
	{
		if (c != num3)
		{
			printf("2Strike!!\n");
		}
	}
	if (b == num2 && c == num1)
	{
		if (a == num3)
		{
			printf("1Strike!! 2Ball!!\n");
		}
		if (a != num3)
		{
			printf("1Strike!! 1Ball!!\n");
		}
	}
	else if (b == num2 && a == num3)
	{
		/*if (c == num1)
		{
			printf("1Strike!! 2Ball!!\n");
		}*/
		if (c != num1)
		{
			printf("1Strike!! 1Ball!!\n");
		}
	}
	else if (b == num2 && a != num1 && a != num3 && c != num1&& c != num3)
	{
		printf("1Strike!!\n");
	}
	else if (c == num1 && a == num3)
	{
		if (b == num2)
		{
			printf("3Ball!!\n");
		}
		if (b != num2)
		{
			printf("2Ball!!\n");
		}
	}
	else	 if (a == num2 && c == num3 )
	{
		if (b == num1)
		{
			printf("1Strike!! 2Ball!!\n");
		}
		if (b != num1)
		{
			printf("1Strike!! 1Ball!!\n");
		}
	}
	if (c == num3 && b == num1)
	{
		/*if (a == num2)
		{
			printf("1Strike!! 2Ball!!\n");
		}*/
		if (a != num2)
		{
			printf("1Strike!! 1Ball!!\n");
		}
	}
	/*if (c == num3 && b == num2)
	{
		if (a != num1)
		{
			printf("2Strike!!\n");
		}
	}*/
	if (c == num3 && a != num1 && a != num3 && b != num2 && b != num1)
	{
		printf("1Strike!!\n");
	}

	if (a != num1 && a != num2 && a != num3 && b != num1 && b != num2 && b != num3 && c != num1 && c != num2 && c != num3)
	{
		printf("OUT!!\n");
	}
	else if (a == num2 && b == num1 && c != num3)
	{
		printf("2Ball1\n");
	}
	else if (a == num2 && b != num1 && c == num3)
	{
		printf("2Ball1\n");
	}
	else if ((a != num2 && a != num3 && a != num1) && b == num3 && c == num1)
	{
		printf("2Ball\n");
	}	
	else if (a == num3 &&(( b != num1 && b != num2) && (c != num2 && c !=num1)))
	{
		printf("1Ball\n");
	}
	else if (a == num3 && b == num1 && (c != num2 && c != num1 && c != num3 ))
	{
		printf("2Ball7\n");
	}

	else if (((a != num3 && a != num1) && (b != num1 && b !=num3)) && c == num2)
	{
		printf("1Ball9\n");
	}
	else if (a != num3 && b == num1 && c == num2)
	{
		printf("2Ball10\n");
	}
}
