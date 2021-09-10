#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void menu();
int generate_number();
void output_number();
int main()

{
	srand((unsigned)time(NULL));
	menu();
	output_number();
}


void menu()
{
	printf("-----------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("-----------------\n");
}

int generate_number()
{
	int i, maximum;
	int price[SIZE] = {};
	for (i = 0; i < SIZE; i++)
	{
		price[i] = (rand() % 100) + 1; //1부터
		printf("%d ", price[i]);
	}
	printf("\n\n");
	maximum = price[0];
	for (i = 1; i < SIZE; i++)
	{
		if (price[i] > maximum)
		{
			maximum = price[i];
		}
	}
	return maximum;
}

void output_number()
{
	int i;
	i = generate_number();
	printf("최댓값은 %d입니다\n", i);
}
