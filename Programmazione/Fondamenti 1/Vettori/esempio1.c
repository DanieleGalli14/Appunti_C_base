/*shift (scorrimento)sinistra con i vettori*/
#include <stdio.h>

void shift_sin (int v[], int dim)
{
	int i;
	for (i=0; i<dim-2; i++)
		v[i]=v[i+1];
	v[dim-1]=0;
}

void stampa_matrice(int v[], int dim)
{
	int i;
	
	for (i=0; i<dim; i++)
	
	
}

int main()
{
	int vet[5]={4, 7, 1, 3, 6};
	shift_sin (vet, 5);
	stampa_vettore (vet, 5);
	
	return 1;
}