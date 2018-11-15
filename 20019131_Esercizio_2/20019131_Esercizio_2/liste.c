#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

Nodo *crea_da_file(FILE *fp){
	Nodo *startL;
	Nodo *nextL;	
	
	int x;
	
	startL=(Nodo *) malloc(sizeof(Nodo));
	
	if (startL == NULL){
		printf ("ERRORE\n");
		return NULL;
	}
	
	else{
		fscanf (fp, "%d", &x);
		startL->data = x;
		nextL = startL;
		
		while(fscanf (fp, "%d", &x) != EOF){
			nextL->next=(Nodo *) malloc(sizeof(Nodo));
			
			if(nextL->next != NULL){
				
				nextL = nextL->next;
				
				nextL->data = x;
			}
		}
		
		nextL->next = NULL;
	}
	
	return startL;
}

void stampa(Nodo *l){
	
	Nodo *startL = l;
	Nodo *nextL = startL;
	
	while(nextL!= NULL){
		printf("%d-->", nextL->data);
		nextL=nextL->next;
	}
	printf("NULL\n\n");
}

void pari(FILE *fp, Nodo *l){
	Nodo *startL = l;
	Nodo *nextL = startL;
	
	while(nextL!=NULL){
		if(nextL->data % 2 == 0){
			fprintf(fp, "-->%d", nextL->data);
		}

		nextL = nextL -> next;
	}
	
}

void massimo (Nodo *l){
	Nodo *startL = l;
	Nodo *nextL = startL;
	int massimo = 0;
	
	while(nextL != NULL){
		if(nextL->data > massimo){
			massimo = nextL->data;
		}
		
		nextL = nextL->next;
	}
	
	printf("Valore massimo della lista: %d\n", massimo);
}

void minimo (Nodo *l){
	Nodo *startL = l;
	Nodo *nextL = startL;
	int minimo = nextL->data;
	nextL = nextL->next;
	
	while(nextL != NULL){
		if(nextL->data < minimo){
			minimo = nextL->data;
		}
		
		nextL = nextL->next;
	}
	
	printf("Valore minimo della lista: %d\n", minimo);
}
