#include<stdio.h>

int main()

{
	double bac, time = 0;

	printf("세균수를 입력하시오.\n");
	scanf("%lf", &bac);

	while (time < 6)
	{

		bac = bac * 4;

		time++;
	}
	printf("%lf\n", bac);
}