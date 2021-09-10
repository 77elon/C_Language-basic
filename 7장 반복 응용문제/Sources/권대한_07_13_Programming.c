#include <stdio.h>

int main()
{
	int i, n, r,a;

	printf("n의 값 : ");
	scanf("%d", &n);
	getchar();
	printf("r의 값 : ");
	scanf("%d", &r);
	getchar();
	a = n;
	for (i = n; i >= (a - r + 2); i--)
	{
		n = n * (i - 1);
	}
		printf("%d\n", n);
}