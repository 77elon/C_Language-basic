#include <stdio.h>

int main()

{
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("십의 자리 : %d\n", x / 10);
	printf("일의 자리 : %d\n", x % 10);
}