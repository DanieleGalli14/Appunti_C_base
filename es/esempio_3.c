// esempio_3
// USO di do-while, if, float
// dati tre voti compresi tra 1 e 10
// calcolare la media
// visualizzare la media a video

#include <stdio.h>

void main()
{
	int voto_1, voto_2, voto_3;
	int somma;
	float media;
	
	do
	{
		printf("Inserisci il voto 1: ");
		scanf("%d", &voto_1);
	}
	while (voto_1 < 1 || voto_1 > 10);
	
	do
	{
		printf("Inserisci il voto 2: ");
		scanf("%d", &voto_2);
	}
	while (voto_2 < 1 || voto_2 > 10);
	
	do
	{
		printf("Inserisci il voto 3: ");
		scanf("%d", &voto_3);
	}
	while (voto_3 < 1 || voto_3 > 10);
	
	somma = voto_1 + voto_2 + voto_3;
	
	// casting esplicito
	media = (float) somma / 3;
	
	printf("la media vale: %f", media);
	
}