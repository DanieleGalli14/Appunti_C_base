#include <stdio.h>

int conta_caratteri (char s[])
{
	int i;
	
	//calcola lunghezza parola
	i=0;
	while (s[i]!= "\0")
		i++;
	printf ("Numero di caratteri: %d\n", i);
	
	return i;
}
int main ()
{
	char s[30];
	int num_car;
	
	printf ("Scrivi parola:\n");
	scanf ("%s", s); //nessuna &
	printf ("La parola e' %s\n", s);
	
	num_car=conta_caratteri(s);
	printf("%d caratteri\n", num_car);
	
	return 1;
}