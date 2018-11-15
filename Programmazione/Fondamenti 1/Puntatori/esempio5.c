/*passaggio di vettori per riferimento*/
#include <stdio.h>

void carica_vettore (int* v, int dim)
{
	int i;
	
	for (i=0; i<dim; i++)
	{
		printf ("Valore con indice %d:", i);
		scanf ("%d", v+i);
	}
}

void stampa_vettore (int* v, int dim)
{
	int i;
	
	for (i=0; i<dim; i++)
		printf ("%d", *(v+i));
	printf ("\n");
}
int main ()
{
	int d;
	
	printf ("Dimensione vettore?");
	scanf ("%d", &d);
	
	int vet[d], mv, x, j;
	
	carica_vettore (vet, d);
	stampa_vettore (vet, d);
	
	return 1;
}