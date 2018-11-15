/*esempio con fattoriale*/

#include <stdio.h>

void fattoriale (int x, int *f)
{
	int i;
	
	*f=1;
	for (i=1; i<=x; i++)
		*f=(*f)*i;
}

int leggi_input ()
{
	int n, i;
	i=1;
	
	do 
	{
		printf ("Inserisci valore:\n");
		scanf ("%d", &n);
		
		if (n<0)
			printf ("ERRORE: NON SONO AMMESSI VALORE NEGATIVI");
	}
	while (n<0);
	
	return n;
}

int main()
{
	int in, out;
	
	in=leggi_input();
	fattoriale (in, &out);
	printf ("Il fattoriale vale %d\n", out);
	
	return 1;
}