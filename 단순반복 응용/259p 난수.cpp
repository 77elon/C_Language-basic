#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()

{	
	srand(time(NULL));
	int random = rand()%100;
	int guess, tries = 0;

	do {
		scanf("%d", &guess);
		tries++;
		if (guess > 100)
		{
			printf("잘못된 값입니다.\n");
		}
		else if (guess > random)
		{
			printf("제시한 정수가 높습니다.\n");
		}
		else if (guess < random)
		{
			printf("제시한 정수가 낮습니다.\n");
		}
	} while (guess != random);

	printf("축하합니다. 시도횟수는 %d입니다.\n", tries);
	return 0;
}