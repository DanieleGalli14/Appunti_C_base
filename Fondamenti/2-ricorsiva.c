#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int data;
	struct node *next;
};

typedef struct nodo Node;

Node *newnode(){

	return (Node *)malloc(sizeof(Node));

}

Node *crea(FILE *fp){
	Node *startL = NULL;
	Node *nextL = NULL;

	int d;

	startL = newnode();

	if(startL != NULL){
		fscanf(fp, "%d", &d);

		startL -> data = d;
		nextL = startL;

		while(fscanf(fp, "%d", &d)!= EOF){
			nextL -> next = newnode();
			nextL = nextL -> next;
			nextL -> data = d;
		}

		nextL -> next = NULL;
		return startL;
	}
	else{
		printf("Errore\n");
		return;
	}
}

void stampa(Node *list){
	if(list == NULL)
		return;

	printf("-->%d", list-> data);
	stampa(list->next);
}

Node *posizione(Node *l1, int n, int x){
	if()
}

void main(int argc, char *argv[]){
	Node *l1;

	FILE *fp = fopen("2-dati_ricorsione.txt", "r");
	if(fp == NULL){
		printf("Errore\n");
		return;
	}

	l1 = crea(fp);
	fclose(fp);
	stampa(l1);
	printf("\n\n");

}