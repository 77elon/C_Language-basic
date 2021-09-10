#include <stdio.h>

int main()

{
	int a = 0, b = 1, c, d;
	
	printf("몇 번째 항까지 구할까요?\n");
	scanf("%d", &d);
	getchar();
	printf("%d ", a);
	for (; d > 0; d--)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", a);
	}
}