#include <stdio.h>
void main ()
{
	int x, max, n, i;
	
	printf ("Inserisci il numero di valori da confrontare\n");
	scanf ("%d", &n);
	
	printf ("Inserire i valori\n");
	scanf ("%d", &x);

	for (i=0; i<n-1; i++)
	{
		scanf ("%d", &x);
		if (i==0 || x>max)
			max=x;
	
	}
	
	printf ("Il massimo e' %d\n", max);
	
}