#include <stdio.h>

int main(void)

{
	float b, h, a;

	printf("밑변을 입력하시오.\n");
	scanf_s("%f", &b);
	printf("높이를 입력하시오.\n");
	scanf_s("%f", &h);
	a = 0.5 * b * h;
	printf("삼각형의 넓이 : %f.\n",a);

}