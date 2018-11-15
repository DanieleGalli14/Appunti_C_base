#include <stdio.h>

int incrementa (int num)
{
	num++;
	return num;
}

void main ()
{
	int x=4;
	int valore;
	valore=incrementa(x);
	
	printf ("il valore aumentato vale %d\n", valore);
}