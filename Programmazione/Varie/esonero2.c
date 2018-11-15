#include <stdio.h>
#include <string.h>

void main ()
{
	int q, k, i;
	
	printf ("Quanti numeri pari si vogliono visualizzare?\n");
	scanf ("%d", &q);
	
	printf ("Quanti numeri ci sono per riga?\n");
	scanf ("%d", &k);
	
	
	for (i=1; i<=q; i++)
    {
        printf ("%d\t", i*2);
		if (i%k==0)
			printf ("\n");
        
    }
	
    printf ("\n\n");
	
}