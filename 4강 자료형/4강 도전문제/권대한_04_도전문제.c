#include <stdio.h>
#include <math.h>
int main(void)
{
	double light_speed = 300000; 
	double distance = 149600000;

	double time;
	int min, sec,minute = 60;
	double fmod(double time, double minute);
	time = distance / light_speed;
	min = time / 60;
	sec = fmod(time, minute);
	printf("빛의 속도는 %fkm/s \n", light_speed);

	printf("태양과 지구와의 거리 %fkm \n", distance);
	printf("도달 시간은 %d분 %d초\n", min , sec);
	printf("도달 시간은 %f초 \n", time);
	return 0;

}