/*le matrici hanno troppi elementi da posizione a mano...
esiste una funzione che risolve il problema: rand(om)
ma anche no!
tramite  un valore detto seme il terminale darà gli stessi numeri per la stessa funzione*/
#include <stdio.h>
#include <stdlib.h> //senza di esso rand NON VA!!!
#include <time.h> //citiamo il tempo...
#define RIGHE 5
#define COLONNE 5

int mat [RIGHE][COLONNE];

//carica tutti i valori
void carica_matrice_casuale ()
{
	int i, j; //i per le righe, j per le colonne
	
	for (i=0; i<RIGHE; i++)
		for (j=0; j<COLONNE; j++)
		{
			mat[i][j]=rand()%100;
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
	
	srand (time (NULL)); //genera un nuovo seme in base all'ora in cui viene effettuato il comando!!!
	carica_matrice_casuale();
	stampa_matrice();
	massimo=calcola_massimo();
	somma=calcola_somma();
	
	printf ("Il massimo e' %d:\n", massimo);
	printf ("La somma di tutti gli elementi vale %d\n", somma);
	
	return 1;
}