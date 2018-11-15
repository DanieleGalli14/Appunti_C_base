// esempio_4.c
// USO del FOR
// come esempio_3 ma con ciclo

#include <stdio.h>

void main()
{
	int i; // contapassi del for
	int n = 3; // definisce il numero di ripetizioni del for
	int voto;
	int somma = 0;
	float media;
	
	for(i=1; i<=n; i++) // finché la i è minore o uguale ad n ripete le istruzioni tra le graffe
	{
		printf("Step %d\n", i);
		printf("Inserisci voto: ");
		scanf("%d", &voto);
		somma = somma + voto;
	}
	media = (float) somma / n;
	printf("La media vale: %f", media);
	
}