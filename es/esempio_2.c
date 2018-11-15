// esempio_2.c
// USO dell'IF - ELSE
// USO delle costanti
// Dato l'anno di nascita, dire se l'utente è maggiorenne o no

#include <stdio.h>

// costanti
#define ANNO 2017


void main()
{
	int anno_di_nascita;
	
	int differenza;
	
	printf("Inserisci anno di nascita: ");
	scanf("%d",&anno_di_nascita);
	
	differenza = ANNO - anno_di_nascita;
	
	printf("La tua eta' e': %d", differenza);
	
	// lascia due linee vuote
	printf("\n");
	
	if (differenza >= 18)
	{
		printf ("Maggiorenne");
	}
	else
	{
		printf ("Minorenne");
	}
		
}