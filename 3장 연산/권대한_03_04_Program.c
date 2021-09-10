// 원의 면적을 구하는 프로그램 

#include <stdio.h>

int main(void)
{
	float radius, area; // 반지름을 radius, 면적을 area로 설정

	printf("반지름 값을 입력하시오.\n"); //사용자 편의
	scanf_s("%f", &radius); // 반지름 값 받음

	area = 3.14 * radius * radius; // x 2제곱을 표현

	printf("원의 면적은 %f\n", area); // area값 요청

	return 0;
}