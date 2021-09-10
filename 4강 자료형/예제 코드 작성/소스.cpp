#include <stdio.h>

int main(void)

{
	int x;

	printf("변수 x의 크기 %d\n", sizeof(x));

	printf("char 의 크기 %d\n", sizeof(char));
	printf("int 의 크기 %d\n", sizeof(int));
	printf("short 의 크기 %d\n", sizeof(short));
	printf("long 의 크기 %d\n", sizeof(long));
	printf("float 의 크기 %d\n", sizeof(float));
	printf("double 의 크기 %d\n", sizeof(double));

}