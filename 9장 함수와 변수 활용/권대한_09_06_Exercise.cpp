#include <stdio.h>

int recursive(int n);

int main()
{

	recursive(5);
}

int recursive(int n)
{
	while(n > 0)
	{
		n--;
	}
	if (n == 0)
	{
		return 0;
	}

}