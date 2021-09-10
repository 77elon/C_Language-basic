#include <stdio.h>
#include <math.h>

int main()

{
	double a;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &a);

	printf("반올림한 값은 %lf입니다 \n", ceil(a));

}