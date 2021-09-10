//저축액을 계산하는 프로그램 
#include <stdio.h>

int main(void)
{
	int salary, deposit; //월급은 salary, deposit은 예금이므로 저축액으로 공간확보

	printf("월급을 입력하시오.(만원 단위)\n"); //사용자 편의
	scanf_s("%d", &salary); // 월급값 입력받음

	deposit = 10 * 12 * salary; // 12개월 * 10년 * 월급값으로 10년간의 연봉을 구할수있다.

	printf("10년 간의 연봉액은 %d만원입니다.\n", deposit); // 정의해둔 deposit값을 요청하여 연봉이 나온다!

	return 0;

}