/*esempio con fattoriale*/

#include <stdio.h>

int fattoriale (int); //prototipo
int leggi_input ();

int main()
{
	int in, out;
	
	do 
	{
		printf ("Inserire valore:\n");
		scanf ("%d", n);
		if (n<0)
			printf ("ERRORE: Non sono ammessi valori negativi!!!!\n");
	}
	while (n>0)
		
	return n;
}

int fattoriale (int x);
{
	int f, i;
	
	f=1;
	for (i=1; i<=x; i++)
		f=f*i;
	
	return f;
}

int fattoriale (int);
int leggi_input ();
int main ();
{
	int in, out;
	
	in= leggi_input ();
	out=fattoriale(in);
	printf ("Il fattoriale vale %d\n", out);
	return 1;
}