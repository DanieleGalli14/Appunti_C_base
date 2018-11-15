#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void main(int argc, char *argv[]) {
	
	if(argc != 3){
		printf("Errore: argomenti insufficienti\nIl formato e' <nome eseguibile> <dati_in.txt> <dati_pari.txt>");
		return;
	}
	
	Nodo *l1;
	
	FILE *fp = fopen(argv[1], "r");
	
	if(fp == NULL){
		printf("Apertura file fallita\n");
		return;
	}
	
	l1=crea_da_file(fp);
	stampa(l1);
	fclose(fp);
	
	fp = fopen (argv[2], "w");
	if(fp == NULL){
	printf ("Scrittura file fallita\n");
	}
	else{
		pari(fp, l1);
	}
	
	fclose(fp);
	
	massimo(l1);
	
	minimo(l1);	
	
	return;
}
