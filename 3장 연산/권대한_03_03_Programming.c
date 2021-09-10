#include <stdio.h>

int main(void)

{
	float x, n;

	printf("실수를 입력하시오.\n");
	scanf_s("%f", &x);

	n = 3 * x * x + 7 * x + 11;
	printf("다항식의 값은 %f입니다.\n", n);

}