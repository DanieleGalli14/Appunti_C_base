#include <stdio.h>
#include <malloc.h>

int fattric (int n) //calcola in modo ricorsivo il fattoriale
{
	if (n==0)
		return 1;

	else 
		return n* fattric (n-1);
}

int fattit (int n)
{
	int ret=1;

	while (n>0)
	{
		ret=ret*n;
		n--;
	}

	return ret;
}

int potenza (int x, int y)//calcola x^y
{
	if (y==0)
		return 1;
	else
		return x*potenza(x, y);
}
void main ()
{

}