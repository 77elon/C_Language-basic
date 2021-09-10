// 사각형의 가로 세로 길이로 둘레와 면적 구하기

#include <stdio.h>

int main(void)
{
	double w, h, area, perimeter; // 한줄로 lf 정의

	printf("가로와 세로 값을 입력하시오\n"); 
	scanf_s("%lf %lf", &w, &h);

	area = w*h; // 넓이값 정의 => 가로 * 세로
	perimeter = 2 * (w + h); // 둘레값 정의 

	printf("사각형의 넓이는 %lf\n사각형의 둘레는 %lf\n", area, perimeter); // 한줄로 정의
	return 0;


}