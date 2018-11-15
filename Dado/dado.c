#include <stdio.h>
#include <time.h>
#include <stdlib.h>


char continua();

void main (){

	printf ("Benvenuto al software dado!\n");
	getchar();
	
	int d;

	char risposta;

	do{
		printf ("Premi un pulsante per lanciare il dado!\n");
		getchar();

		srand(time(NULL));

		d=rand() % 6 + 1;

		printf ("%d\n", d);

		risposta=continua();	
		
	}while(risposta == 'y');
	
	printf("Grazie per aver giocato!\nPremere un pulsante per terminare...");
	getchar();
}

char continua(){

	char risposta;
	int flusso;

	printf("Vuoi effettuare un altro lancio?\n");
	do{
			risposta=getchar();
			
			if (!(risposta =='y' ^ risposta =='n')){
				printf ("ERRORE: Inserire ''y'' o ''n''\n");
				flusso=0;
			}
			else
				flusso = 1;

	}while(flusso!=1);

	if (risposta=='y')
		return 'y';

	else
		if (risposta == 'n')
			return 'n';

}