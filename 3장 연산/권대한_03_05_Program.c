//환율 계산 프로그램
#include <stdio.h>

int main(void)

{
	float rate, usd; // 환율이므로 실수취급
	int krw;

	printf("환율을 입력하시오.\n"); // 편의
	scanf_s("%f", &rate); // 환율값 조사

	printf("원화 금액을 입력하시오.\n");
	scanf_s("%d", &krw); // 바꾸려고 하는 원화 조사

	usd = krw / rate; // 달러 구하는 방법

	printf("원화 %d원은 %f달러입니다.", krw, usd); 

	return 0;


}