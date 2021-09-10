#include <stdio.h>

int main(void)
{
	int x;
	double PYE = 3.3058;

	printf("평을 입력하세요 : ");
	scanf_s("%d", &x);
	printf("%lf평방미터입니다.\n", PYE * x);

}