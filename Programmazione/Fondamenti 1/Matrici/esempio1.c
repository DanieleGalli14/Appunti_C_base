/*esempio semplice di matrice*/
#include <stdio.h>

int mat [2][3];

//carica tutti i valori
void carica_matrice ()
{
	int i, j; //i per le righe, j per le colonne
	
	for (i=0; i<2; i++)
		for (j=0; j<3; j++)
		{
			printf ("valore per riga %d e colonna %d:\n", i, j);
			scanf ("%d", &mat [i][j]);
		}
}

void stampa_matrice()
{
	int i, j;
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d\t", mat[i][j]);
		}
		printf ("\n");
	}
}

int main ()
{
	carica_matrice();
	stampa_matrice();
	
	return 1;
}