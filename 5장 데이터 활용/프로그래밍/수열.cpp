#include<stdio.h>

void fivo();
void operation();

int main()
{
	fivo();
}
void fivo()
{
	int n1, n2, n3, a, b, c = 0;
	n1 = 0;
	n2 = 1;
	printf("%d, %d, ", n1, n2);

	for (b = 0; b < 6; b++)
	{

			n3 = n1 + n2 + c;
			printf("%d, ", n3);
			c =(n1 + n2) ;
			

	}

}
void operation()
{

}