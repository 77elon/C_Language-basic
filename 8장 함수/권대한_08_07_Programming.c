#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int b_rand();

int main()

{
	int a, b;
	b = b_rand();
	char ch;
	srand((unsigned)time(NULL));
	for (;;)
	{
		printf("앞 면 또는 뒷 면\n");
		scanf("%d", &a);
		getchar();
		if (a == b)
		{
			printf("맞았습니다.\n");
		}
		else if (a != b)
		{
			printf("틀렸습니다.\n");
		}
		printf("계속하시겠습니까? (y 또는 n)\n");
		scanf("%c", &ch);
		getchar();
		if (ch == 'y')
		{
			continue;
		}
		if (ch == 'n')
		{
			break;
		}

	}
}

int b_rand()
{
	int a;
	a = rand() % 2;
	return a;
}