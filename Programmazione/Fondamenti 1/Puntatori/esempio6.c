/*passaggio di vettori per riferimento (con variabile static)*/
#include <stdio.h>
#define DIM 5

int* carica_vettore ()
{
	int i;
	
	static int v[DIM]; //mantiene il vettore dopo la chiusura della funzione
	
	for (i=0; i<DIM; i++)
	{
		printf ("Valore con indice %d:", i);
		scanf ("%d", v+i);
	}
	
	return v;
}

void stampa_vettore(int* v)
{
	int i;
	
	for (i=0; i<DIM; i++)
		printf ("%d", *(v+i));
	printf ("\n");
}

int main ()
{
	int d;
	int mv, x, j;
	int* vet;
		
	vet=carica_vettore(d);
	stampa_vettore(vet);
	
	return 1;
}