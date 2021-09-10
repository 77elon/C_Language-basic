#include<stdio.h>

int main()

{
	double AC, AE, BC, DE;
	printf("AC AE BC를 입력하시오\n");
	scanf_s("%lf %lf %lf", &AC, &AE, &BC);
	DE = AE*BC / AC;
	printf("DE값은 %lf입니다.\n", DE);

}