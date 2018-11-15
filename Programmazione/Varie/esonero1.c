#include <stdio.h>
#include <string.h>

void main ()
{
	int a1, a2, a, i;
	
	printf ("Inserisci primo anno:\n");
	scanf ("%d", &a1);
	
	printf ("Inserisci secondo anno:\n");
	scanf ("%d", &a2);
	
	if (a1<a2)
		printf ("Gli anni bisestili sono:\n");
	
		for (i=a1; i<=a2; i++)
		{
			if (i%4==0)
				printf ("%d\n", i);
		}
		
	printf ("\n\n");
	
}