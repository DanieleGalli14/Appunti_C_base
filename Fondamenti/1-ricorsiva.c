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

Node *differenza(Node *l1, Node *l2, int i){
	if(l1 != NULL && l2 != NULL){
		if((l1->data - l2->data)%i == 0){
			Node *p = newnode();
			p ->data = (l1-> data - l2 -> data);
			p->next = differenza(l1 -> next, l2 -> next, i++);
			return p;
		}
	}

	else 
		return NULL;
}

void main(int argc, char *argv[]){
	Node *l1, *l2, *l3;

	FILE *fp = fopen("1-dati_ricorsione1.txt", "r");
	if(fp == NULL){
		printf("Errore\n");
		return;
	}

	l1 = crea(fp);
	fclose(fp);


	fp = fopen("1-dati_ricorsione2.txt", "r");
	if(fp == NULL){
		printf("Errore\n");
		return;
	}

	l2 = crea(fp);
	fclose(fp);

	stampa(l1);
	printf("\n\n");

	stampa(l2);
	printf("\n\n");

	l3 = differenza(l1, l2, 1);
	stampa(l3);
	printf("\n\n");
}