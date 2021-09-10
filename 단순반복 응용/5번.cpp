#include <stdio.h>

int main()

{
	int a = -1, sum, c = 0;

	for (sum = 0; sum < 500; c++)
	{
		a = a + 2;
		sum = sum + a;

	}
	printf("%d %d\n", a, c);

}