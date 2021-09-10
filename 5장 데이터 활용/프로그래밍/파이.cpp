#include <stdio.h>


int main()

{
	double 분자 = 4, 분모 = 1, 합 = 0;
	int loop_count;

	printf("반복횟수 :");
	scanf("%d", &loop_count);

	while (loop_count > 0)
	{
		합 = 합 + 분자/ 분모;
		분자 = -1 * 분자;
		분모 = 분모 + 2;
		--loop_count;
	}
	printf("파이 = %lf\n", 합);
	return 0;
 }