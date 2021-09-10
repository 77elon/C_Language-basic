#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face();

int main()
{
	srand((unsigned)time(NULL));
	get_dice_face();
}

int get_dice_face()
{
	static int times = 0;
	int result;
	static int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	result = rand() % 6;

	++times;

	if (result == 0)
	{
		a++;
	}
	if (result == 1)
	{
		b++;
	}
	if (result == 2)
	{
		c++;
	}
	if (result == 3)
	{
		d++;
	}
	if (result == 4)
	{
		e++;
	}
	if (result == 5)
	{
		f++;
	}
	if(times % 100 == 0)
	printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);

	return get_dice_face();
}