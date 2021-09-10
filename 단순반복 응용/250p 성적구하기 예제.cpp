#include <stdio.h>

int main(void)
{
	int grade = 0, n = 0;
	float sum = 0, average;
	printf("종료 시 음수 입력\n");
	while (grade >= 0)
	{
		printf("성적을 입력하시오 :");
		scanf("%d", &grade);
		sum += grade;
		n++;
	}
	sum -= grade;
	n--;
	average = sum / n;
	printf("성적의 평균은 %f점 \n", average);
	return 0;
}