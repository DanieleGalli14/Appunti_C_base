/*è possibile passare pe riferimento una matrice ad una funzione*/
#include <stdio.h>
#include <stdlib.h> //senza di esso rand NON VA!!!
#include <time.h> //citiamo il tempo...
#define RIGHE 5
#define COLONNE 5

int mat [RIGHE][COLONNE];

//carica tutti i valori
void carica_matrice_casuale (int m[RIGHE][COLONNE])
{
	int i, j; //i per le righe, j per le colonne
	
	for (i=0; i<RIGHE; i++)
		for (j=0; j<COLONNE; j++)
		{
			m[i][j]=rand()%100;
		}
}

void stampa_matrice(int m[RIGHE][COLONNE])
{
	int i, j;
	
	for (i=0; i<RIGHE; i++)
	{
		for (j=0; j<COLONNE; j++)
		{
			printf ("%d\t", m[i][j]);
		}
		printf ("\n");
	}
}

int calcola_massimo (int m[RIGHE][COLONNE])
{
	int i, j, max;
	
	for (i=0; i<RIGHE; i++)
		for (j=0; j<COLONNE; j++)
			if ((i==0)&& (j==0))
				max=m [i][j];
			else
				if (m[i][j]>max)//elementi successivi
					max=m [i][j];
	
	return max;
}

int calcola_somma (int m[RIGHE][COLONNE])
{
	int i, j, s;
	s=0;
	
	for (i=0; i<RIGHE; i++)
		for (j=0; j<COLONNE; j++)
			s=s+m[i][j];
		
		return s;
}

int main ()
{
	int max[RIGHE][COLONNE], massimo, somma;
	
	srand (time (NULL)); //genera un nuovo seme in base all'ora in cui viene effettuato il comando!!!
	carica_matrice_casuale(mat);
	stampa_matrice(mat);
	massimo=calcola_massimo(mat);
	printf ("Il massimo e' %d:\n", massimo);
	somma=calcola_somma(mat);
	printf ("La somma di tutti gli elementi vale %d\n", somma);
	
	
	return 1;
}