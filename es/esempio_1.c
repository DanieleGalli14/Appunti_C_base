// Esempio 1 <-- commento ignorato dal compilatore

#include <stdio.h> // libreria per Input e Output
// Dato l'anno di nascita da tastiera, calcolare l'età

void main()
{
	// variabili
	int anno_di_nascita;
	int differenza;
	
	// OUTPUT a VIDEO di un semplice testo
	printf("Ciao, inserisci la tua data di nascita: ");
	
	// INPUT da TASTIERA
	// scanf ha 2 parametri:
	// 1) cosa legge da tastiera --> intero --> %d
	// 2) dove salvare il dato letto --> &variabile
	scanf("%d",&anno_di_nascita);
	
	// OPERAZIONE 
	// esegue le operazioni DOPO l'uguale
	// salva il risultato nella variabile PRIMA dell'uguale
	differenza = 2017 - anno_di_nascita;
	
	// OUTPUT a VIDEO di un risultato contenuto in una variabile
	printf("La tua eta' e' %d",differenza);
	
} // FINE main()

// sotto il main non posso scrivere altro (per ora)

