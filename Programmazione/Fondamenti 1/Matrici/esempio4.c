/*ah già! dove sta scritto che le matrici sono solo 2x3???*/
#include <stdio.h>
#define RIGHE 5
#define COLONNE 5

int mat [RIGHE][COLONNE];

//carica tutti i valori
void carica_matrice ()
{
	int i, j; //i per le righe, j per le colonne
	
	for (i=0; i<RIGHE; i++)
		for (j=0; j<COLONNE; j++)
		{
			printf ("valore per riga %d e colonna %d:\n", i, j);
			scanf ("%d", &mat [i][j]);
		}
}

void stampa_matrice()
{
	int i, j;
	
	for (i=0; i<RIGHE; i++)
	{
		for (j=0; j<COLONNE; j++)
		{
			printf ("%d\t", mat[i][j]);
		}
		printf ("\n");
	}
}

int calcola_massimo ()
{
	int i, j, max;
	
	for (i=0; i<RIGHE; i++)
		for (j=0; j<COLONNE; j++)
			if ((i==0)&& (j==0))
				max=mat [i][j];
			else
				if (mat [i][j]>max)//elementi successivi
					max=mat[i][j];
	
	return max;
}

int calcola_somma ()
{
	int i, j, s;
	s=0;
	
	for (i=0; i<RIGHE; i++)
		for (j=0; j<COLONNE; j++)
			s=s+mat[i][j];
		
		return s;
}

int main ()
{
	int massimo, somma;
	
	carica_matrice();
	stampa_matrice();
	massimo=calcola_massimo();
	somma=calcola_somma();
	
	printf ("Il massimo e' %d:\n", massimo);
	printf ("La somma di tutti gli elementi vale %d\n", somma);
	
	return 1;
}