#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int Gen_number();

int main()
{
	srand((unsigned)time(NULL));
	printf("가장 많이 출력된 수는 %d입니다.", Gen_number());
}

int Gen_number()
{
	int i, number[10] = {}, n = 0;
	for (i = 0; i < 100; i++)
	{
		++number[rand() % 10];
	}
	printf("%d\n", number[0]);
	printf("%d\n", number[1]);
	printf("%d\n", number[2]);
	printf("%d\n", number[3]);
	printf("%d\n", number[4]);
	printf("%d\n", number[5]);
	printf("%d\n", number[6]);
	printf("%d\n", number[7]);
	printf("%d\n", number[8]);
	printf("%d\n", number[9]);
	for (i = 0; i < 9; i++)
	{
		if (number[i] > n)
			n = i;
	}
	return n;
}