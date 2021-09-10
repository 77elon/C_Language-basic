// 프로그래밍시 정해둔 두 정수를 더하는 프로그램
#include<stdio.h>

int main(void)
{
	int x, y, sum; // 공간 확보
	
	x = 100; 
	y = 200;

	sum = x + y; //sum의 정의

	printf("두 수의 합은 %d\n", sum); // printf에서 정수를 원하고, sum값을 요청하였으므로 더해진값이 나옴

	return 0;

}