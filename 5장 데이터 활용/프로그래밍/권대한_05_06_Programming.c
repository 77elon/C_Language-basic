#include<stdio.h>

int main()

{
	int x;
	int y;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	y = ~x + 1;
	printf("2의 보수 : %d\n", y);

}