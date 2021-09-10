#include <stdio.h>

int main()

{
	int a;

	do {
		scanf("%d", &a);
		if (a < 0)
		{
			printf("음수를 입력하셨습니다.\n");
			continue;
		}
		while (a > 0) 
		{
			printf("%d", a % 10);
			a = a / 10;
		}
	} while (a < 0);

}