#include <stdio.h>

int main()

{
	int x, y, z, c ,result;
	scanf("%d %d %d %d", &x, &y, &z, &c);
	result = x + y + z + c;

	if (result > 100)
	{
		if(x > 30 && y > 30 && z > 30 && c > 10)
		printf("ERROR");

	}
	else if (result >= 90)
	{
		printf("%d A", result);
	}
	else if (result >= 80)
	{
		printf("%d B",result);
	}
	else if (result >= 70)
	{
		printf("%d C", result);
	}
	else if (result >= 60)
	{
		printf("%d D",result);
	}
	else
	{
		printf("%d F", result);
	}
	
}