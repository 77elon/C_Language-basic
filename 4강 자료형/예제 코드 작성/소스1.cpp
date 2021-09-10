#include <stdio.h>

int main(void)
{
	int usd, krw;

	printf("달러를 입력하시오.\n");
	scanf_s("%d", &usd);

	krw = 1120 * usd;

	printf("%d달러는 %d원입니다.\n", usd, krw);

	return 0;
}