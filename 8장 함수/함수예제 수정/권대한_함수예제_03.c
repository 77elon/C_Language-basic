#include <stdio.h>

void input();

void level(int a);

int average(int a, int b);


int main()

{
	input();

}


void input()
{
	int a = 0, b = 0, c = 0, n, sum = 0;

	for (n = 1; n > 0; n++)
	{


		if (n > 0)
		{

			while (1)
			{
				printf("점수와 학번을 입력하시오 :");
				scanf("%d %d", &b, &c);
				if (b == 0 && c == 0)
				{
					break;
				}
				if (b > 0)
				{
					printf("%d 학생은 ", c);
					level(b);
					sum = sum + b;
					break;
				}
				else if (b < 0)
				{
					printf("제대로 된 점수를 입력하시오. \n");
					continue;
				}
			}
			if (b == 0 && c == 0)
			{
				break;
			}
		}

	}
	printf("전체 학생수는 %d이고, 전체 학생 점수의 평균은 %d 입니다.\n", n - 1, average(sum, n - 1));
}


void level(int a)
{
	if (90 <= a && a <= 100)
	{
		printf("등급이 A입니다.\n");
	}
	else if (80 <= a && a < 90)
	{
		printf("등급이 B입니다.\n");
	}
	else if (70 <= a && a < 80)
	{
		printf("등급이 C입니다.\n");
	}
	else if (60 <= a && a < 70)
	{
		printf("등급이 D입니다.\n");
	}
	else if (0 <= a && a < 60)
	{
		printf("등급이 F입니다.\n");
	}
}

int average(int a, int b)
{
	return a / b;
}