#include <stdio.h>

#define SIZE 10

void menu();

int main()
{
	char check;

	while (1)
	{
		printf("좌석을 예약하시겠습니까? (Y 또는 N) ");
		scanf("%c", &check);
		if (check == 'Y')
		{
			menu();
			break;
		}
		if (check == 'N')
		{
			break;
		}
	}
}

void menu()
{
	int loc1, loc2, i, a;
	int size[SIZE] = {};

	printf("-----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("-----------------------\n");

	for (i = 0; i < SIZE; i++)
	{
		printf(" %d", size[i]);
	}
	printf("\n몇 명을 예약하시겠습니까?\n");
	scanf("%d", &loc2);
	for(a = 0; loc2 > a; a++)
	{

			printf("\n몇 번째 좌석을 예약하시겠습니까?");
			scanf("%d", &loc1);
			if (loc1 <= 0 || loc1 > SIZE)
			{
				printf("1부터 10사이의 숫자를 입력하시오\n");
				continue;
			}
			if (size[loc1 - 1] == 0)
			{
				size[loc1 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else
			{
				printf("이미 예약된 자리입니다.\n");
				a--;
				continue;
			}
	}
	printf("\n\t예약현황\t\n");
	printf("\n-----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("-----------------------\n");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d", size[i]);
	}
	printf("\n");
}
