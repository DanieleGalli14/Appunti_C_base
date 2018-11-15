#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "liste.h"


Node *crea_da_file();
void stampa (Node *list);
void voto_pesato(Node *list, char matricola[]);
Node *crea_nuovo(Node *list, char matricola[]);
void crea_file(Node *list);

Node *crea_da_file(){
	
	int i=0;
	
	char nome[DIM];
	int voto;
	int peso;
	
	FILE *fp = fopen("dati.txt", "r");
	
	Node *startL = NULL;
	Node *nextL = NULL;
	
	if (fp == NULL){
		printf ("Errore: File non esistente.\n");
		return NULL;
	}
	
	else{
		while (fscanf(fp, "%s %d %d", nome, &voto, &peso) != EOF){
			i++;
			
			if (i==1){
				startL = (Node *)malloc(sizeof(Node));
				strcpy(startL->nome, nome);
				startL->voto = voto;
				startL->peso = peso;
				nextL = startL;
			}
			else{
				nextL->next = (Node *)malloc(sizeof(Node));
				nextL = nextL->next;
				strcpy(nextL->nome, nome);
				nextL->voto = voto;
				nextL->peso = peso;
			}
		}
		nextL->next = NULL;
	}
	
	fclose(fp);
	return startL;
}

void stampa (Node *list){
	if (list == NULL)
	return;
	
	printf("Matricola %s, voto %d, peso in cfu %d", list->nome, list->voto, list->peso);
	stampa(list->next);
}

void voto_pesato(Node *list, char matricola[]){
	int sommav=0;
	int sommap=0;
	
	while(list != NULL){
		if(matricola == list->nome){
			sommav += (l->voto + l->peso);
			sommap += l->peso;
		}
		list = list->next;
	}
	
	float media_pesata;
	media_pesata = ((float) sommav)/((float) sommap);
	
	printf("La media pesata della matricola %s e' di %f\n", matricola, media_pesata);
}

Node *crea_nuovo(Node *list, char matricola[]){
	int i=0;
	Node *startL = NULL;
	Node *nextL = NULL;
	
	while(list = NULL){
		if (list->nome == matricola){
			i++;
			if(i==1){
				startL = (Node *)malloc(sizeof(Node));
				strcpy(startL->nome, list->next);
				startL->voto = list->voto;
				startL->peso = list->peso;
				nextL = startL;
			}
			else{
				nextL->next = (Node *)malloc(sizeof(Node));
				nextL = nextL->next;
				strcpy(nextL->nome, list->nome);
				nextL->voto = list->voto;
				nextL->peso = list->peso;
			}
		}
	}
	
	nextL->next = NULL;
	
	return startL;
}

void crea_file(Node *list){
	FILE *fp = fopen ("dati_matricola.txt", "w");
	
	while (list != NULL){
		fprintf(fp, "Matricola %s, ", list->nome);
		fprintf(fp, "voto %d, ", list->voto);
		fprintf(fp, "peso in cfu %d.\n", list->peso);
	}
	
	fclose(fp);
}
