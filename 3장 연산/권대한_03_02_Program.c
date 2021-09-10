//사용자에게서 받은 두 수를 더하는 프로그램
#include <stdio.h>

int main(void)
{
	printf("덧셈 프로그램2\n");

	int x, y, sum; // 공간 확보

	printf("첫 번째 숫자를 입력하시오\n"); // 사용자를 위해 배려
	scanf_s("%d", &x); // 첫번째 값 받음

	printf("두 번째 숫자를 입력하시오.\n");
	scanf_s("%d", &y); // 더해지는 두번째 값 받음

	sum = x + y; // x, y값을 받았으므로 sum이라는 정의

	printf("두 수의 합은 %d\n", sum); // sum을 요청하여 더해진 값 요청

	return 0;

}