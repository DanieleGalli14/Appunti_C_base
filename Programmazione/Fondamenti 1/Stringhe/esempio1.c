#include <stdio.h>

void main ()
{
	char s[10];
	int i;
	
	printf ("Scrivi parola:\n");
	scanf ("%s", s); //nessuna &
	printf ("La parola e' %s\n", s);
	
	//calcola lunghezza parola
	i=0;
	while (s[i]!= "\0")
	printf ("Numero di caratteri: %d\n", i);
		i++;
	
	return 1;
}