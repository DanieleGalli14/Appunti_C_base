#include <stdio.h>

int f(int x, int y)
{
	int z;
	
	z=3*x+2*y;
	
	return z;
}

int main ()
{
	int a;
	
	a=f(3,5);

	printf("%d\n", a);
}