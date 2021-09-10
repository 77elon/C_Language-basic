#include <stdio.h>

int main()
{
	char a, b, c, d; 
	unsigned int x=0;
	scanf("%c %c %c %c",&a,&b,&c,&d);
	x = x | a;
	x = x | b << 8;
	x = x | c << 16;
	x = x | d << 24;
	printf("%08x", x);

}