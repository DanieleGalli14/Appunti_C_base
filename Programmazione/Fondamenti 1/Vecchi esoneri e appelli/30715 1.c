#include <stdio.h>
#define DIM 10

int mat [DIM][DIM];

void carica_matrice()
{
	int mat, i, j;
	
	for (i=0; i<DIM; i++)
	{
		for (j=0; j<DIM; j++)
		mat [i][j]=(i+1)*(j+1);
	}
			
}

void stampa_matrice()
{
	int mat, i, j;
	
	for (i=0; i<DIM; i++)
	{
		for (j=0; j<DIM; j++)
			printf ("%d\t", mat[i][j]);
		
		printf ("\n\n");
	}
}

void cerca_valore (int x)
{
	int mat, i, j, p;
	
	p=0;
	
	for (i=0; i<DIM &&p==0; i++)
		for (j=0; j<DIM && p==0; j++)
			if (mat[i][j]==x)
			{
				p=1;
				printf ("%d e' stato trovato in posizione (%d,%d)\n", x, i, j);
			}
			
	if (p==0)
		printf ("Il valore %d NON e' stato trovati nella matrice", x);
}

int somma_riga (int i)
{
	int mat, j, somma;
	
	if ((i>=0)&&(i<DIM))
	{
		somma=0;
		for (j=0; j<DIM; j++)
		somma=somma+mat[i][j];
		
	}
	
	else
		somma=-1;
	
	return somma;
}

void main ()
{
	int k, r, tot;
	
	carica_matrice();
	stampa_matrice();
	
	printf ("Inserire valore da cercare:\n");
	scanf ("%d", &k);
	cerca_valore(k);
	
	printf ("Inserire la riga da sommare:\n");
	scanf ("%d", &r);
	
	tot=somma_riga(r);
	
	if (tot != -1)
		printf ("La somma vale %d", tot);
	else
		printf ("INDICE FUORI DIMENSIONE");
}