#include <stdio.h>

void main ()
{
	int n=5;
	int a[n], i, j, jmin, tmp;
	
	printf ("Inserisci valori dell'array:\n");
	for (i=0; i<n; i++){
		scanf ("%d", a[i]);
	}
	
	for (i=1; i<n; i++){
	jmin=i-1;
	for (j=i; j<n; j++)
		if (a[j]<a [jmin])
			jmin=j;
	tmp= a[jmin];
	a[jmin]=a[i-1];
	a[i-1]=tmp;
	}

}