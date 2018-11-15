#include <stdio.h>

void swap (int *primo, int* secondo)
{
	int tmp;
	tmp=*primo;
	*primo=*secondo;
	*secondo=tmp;
}

void main ()
{
	int x=36, y=27;
	
	printf ("x=%d, y=%d", x, y);
	printf ("\n\n");
	
	swap (&x, &y);
	
	printf ("x=%d, y=%d", x, y);
	printf ("\n\n");
}