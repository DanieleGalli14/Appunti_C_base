// esempio_5.c
// Leggere un vettore contenente voti interi
// Visualizzare a video il contenuto
// Eseguire la media degli elementi

#include<stdio.h>
#define DIM 5

void main()
{
	int v[DIM];
	int somma;
	float media;
	int i;
	
	printf("\n\n"); // invia un "a capo"
	
	// lettura
	for(i=0; i<DIM; i++)
	{
		printf("Inserisci il voto: ");
		scanf("%d", &v[i]);
	}
	
	printf("\n\n");
	
	// stampa
	for(i=0; i<DIM; i++)
	{
		printf("voto: %d \n", v[i]);
	}
	
	printf("\n\n");
	
	// somma
	somma = 0;
	for(i=0; i<DIM; i++)
	{
		somma = somma + v[i];
	}
	
	media = (float) somma / DIM;
	
	printf("Media elementi: %.2f", media); // %f prende tutte le cifre decimali; %.2f prende 2 cifre decimali
	
	printf("\n\n");
	
}