#include <stdio.h>
void main ()
{
	int x;
	
	printf ("Inserisci Numero:\n");
	scanf ("%d", &x);
	
	if (x==6 || x%6==0)
		printf ("PORCO DIO\n");
	else 
		printf ("Sei uno Stinco di Santo!! ^^");
}