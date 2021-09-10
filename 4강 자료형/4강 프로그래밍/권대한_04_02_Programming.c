#include <stdio.h>

int main(void)
{
	double x;

	scanf_s("%x", &x);

	printf("8진수로는 %#o입니다.\n", x);
	printf("10진수로는 %d입니다.\n", x);
	printf("16진수로는 %#x입니다.\n", x);

}