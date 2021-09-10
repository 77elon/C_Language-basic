#include <stdio.h>

int main(void)

{
	float x, y, z, sum, avg;

	printf("실수를 입력하시오.\n");
	scanf_s("%f", &x);
	printf("실수를 입력하시오.\n");
	scanf_s("%f", &y);
	printf("실수를 입력하시오.\n");
	scanf_s("%f", &z);
	sum = x + y + z;
	avg = sum / 3;
	printf("합계는 %f이고, 평균값은 %f입니다.\n", sum, avg);

}