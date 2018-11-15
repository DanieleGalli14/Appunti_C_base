#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

Node *crealista();
void stampa(Node*list);

Node *crealista(){
	Node *Head;
	Node *Tail;

	Head=NULL;
	Tail=NULL;

	int i=0;
	char nome [DIM];
	char nazione [DIM];
	float superficie;
	int abitanti;
	int zona;

	FILE *fp=fopen("citta.txt", "r");

	if(fp==NULL){
		printf("ERRORE NELL'APERTURA DEL FILE\n");
		return NULL;
	}
	else{
		while(fscanf(fp, "%s, %s, %f, %d, %d", nome, nazione, &superficie, &abitanti, &zona) != EOF){
			i++;
			if (i==1){
				Head=(Node *)malloc(sizeof(Node));
				strcpy(Head->nome, nome);
				strcpy(Head->nazione, nazione);
				Head->superficie=superficie;
				Head->abitanti=abitanti;
				Head->zona=zona;
				Tail=Head;
			}
			else{
				Tail->next = (Node *)malloc(sizeof(Node));
				Tail=Tail->next;
				strcpy(Head->nome, nome);
				strcpy(Head->nazione, nazione);
				Tail->superficie=superficie;
				Tail->abitanti=abitanti;
				Tail->zona=zona;
			}
		}
		Tail->next=NULL;
	}

	fclose(fp);

	return Head;
}

void stampa(Node *list){
	if (list==NULL)
		return;

	else{
		printf ("La citta' di %s si trova in %s, si estende per %f, ha %d abitanti e si trova ", list->nome, list->nazione, list->superficie, list->abitanti);
		switch(list->zona){
			case 1:
			printf ("nell'Europa Mediterranea\n");
			case 2:
			printf ("nell'Europa Centrale\n");
			case 3:
			printf ("nell'Europa dell'est");
			case 4:
			printf("nell'Europa del nord\n");
		}
	}	
	stampa (list->next);
}
/*Zone dell'Europa
	1 mediterranea
	2 centrale
	3 est
	4 nord*/