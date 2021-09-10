#include <stdio.h>

void get_average(float a[], int n);

int main()

{
	float grade[3];
	int score[10] = {};
	float average;
	int i;

	grade[0] = 10.0;
	grade[1] = 20.0;
	grade[2] = 30.0;

	get_average(grade, 3);
	for (i = 0; i < 3; i++)
	{
		if (grade[i]>=0 && grade[i]<=10)
		{
			++score[i];
		}
		if (grade[i]>10 && grade[i] <= 20)
		{
			++score[i];
		}
		if (grade[i] > 20 && grade[i] <= 30)
		{
			++score[i];
		}
		if (grade[i] > 30 && grade[i] <= 40)
		{
			++score[i];
		}
		if (grade[i] > 40 && grade[i] <= 50)
		{
			++score[i];
		}
		if (grade[i] > 50 && grade[i] <= 60)
		{
			++score[i];
		}
		if (grade[i] > 60 && grade[i] <= 70)
		{
			++score[i];
		}
		if (grade[i] > 70 && grade[i] <= 80)
		{
			++score[i];
		}
		if (grade[i] > 80 && grade[i] <= 90)
		{
			++score[i];
		}
		if (grade[i] > 90 && grade[i] <= 100)
		{
			++score[i];
		}
	}
	printf("점수대 \t 인원수\n");
	printf("0 - 10\t %d\n", score[0]);
	printf("10 - 20\t %d\n", score[1]);
	printf("20 - 30\t %d\n", score[2]);
	printf("30 - 40\t %d\n", score[3]);
	printf("40 - 50\t %d\n", score[4]);
	printf("50 - 60\t %d\n", score[5]);
	printf("60 - 70\t %d\n", score[6]);
	printf("70 - 80\t %d\n", score[7]);
	printf("80 - 90\t %d\n", score[8]);
	printf("90 - 100\t %d\n", score[9]);

}

void get_average(float a[], int n)
{
	double average;
	average = (a[0] + a[1] + a[2]) / n;
	printf("%lf\n", average);
}