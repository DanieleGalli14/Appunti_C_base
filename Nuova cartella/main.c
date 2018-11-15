#include <stdio.h>
#include <string.h>
#include "liste.h"

void main (){
	
	Node *l1, *l2;
	char matricola[5];
	
	l1 = crea_da_file();
	
	stampa(l1);
	
	do{
		printf ("Inserisci matricola di cui cercare la media pesata: ");
		scanf ("%s", matricola);
	}while(strlen(matricola)!= 5);
	
	voto_pesato(l1, matricola);
	
	do{
		printf ("Inserisci matricola di cui creare una nuova lista: ");
		scanf ("%s", matricola);
	}while(strlen(matricola)!= 5);
	
	l2=crea_nuovo(l1, matricola);
	
	crea_file(l2);	
}
