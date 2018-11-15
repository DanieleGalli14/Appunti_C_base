/*Una programma che
 richiede all’utente l’importo da prelevare dal bancomat.
 Se l’importo non è un multiplo di 10 stampa un opportuno messaggio di
errore.
 Ripete la richiesta finché tale requisito non è soddisfatto.
 Quindi calcola il numero di banconote da emettere secondo questi criteri:
o emette fin che può banconote da 50;
o quando ha terminato con le banconote da 50, emette fin che può
banconote da 20;
o quando ha terminato con le banconote da 20, emette fin che può
banconote da 10.
 Stampa la quantità di banconote da emettere per ogni taglio.
 Esempi:
o per importo=180,
 3 banconote da 50
 1 banconota da 20
 1 banconota da 10
o per importo=140
 2 banconote da 50
 2 banconote da 20
 0 banconote da 10*/
#include <stdio.h>

void main ()
{
		int importo, c, num_50, num_20, num_10, resto_50, resto_20;
		
		do 
		{
			printf ("Inserire importo:\n");
			scanf ("%d", &importo);
			
			c=importo%10!=0;
			if (c)
				printf ("ERRORE: l0importo deve essere multiplo di 10\n");
		}
		while (c);
		
		num_50=importo/50;
		resto_50=importo%50;
		
		num_20=resto_50/20;
		resto_20=resto_50%20;
		
		num_10=resto_20/10;
		
		printf("Importo: %d\n %d banconote da 50\n %d banconote da 20\n %d banconote da 10\n\n", importo, num_50, num_20, num_10);
}