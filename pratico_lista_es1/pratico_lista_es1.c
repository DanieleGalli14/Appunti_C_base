#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node
{
	int d;
	struct node *next;
};

typedef struct node Node;

Node *crea();
void stampa(Node *list);

void main(){
	
	printf("Avvio programma\n\n");
	system("PAUSE");

	Node* list;
	list=crea();

	if(list== NULL){
		printf ("Creazione fallita: uscita dal programma\n");
		exit(0);
	}

	printf("Contenuto della Lista:\n");
	stampa(list);
	printf("\n\n");
	system("PAUSE");

	
}

Node *crea(){
	Node* startL = NULL;
	Node* nextL = NULL;

	int i=0;

	while (i<5){
		
		i++;
		if(i==1){
			startL = (Node *)malloc(sizeof(Node));
			printf("Inserisci il valore del nodo 1: ");
			scanf("%d", startL->d);
			nextL=startL;
		}
		else{
			nextL->next = (Node *)malloc(sizeof(Node));
			nextL = nextL->next;
			printf("Inserisci il valore del nodo %d: ", i);
			scanf("%d", nextL->d);
		}
	}

	nextL->next = NULL;

	return startL;
}

void stampa(Node *list){
	while(list!=NULL){
		printf (">>>%d", list->d);
		list=list->next;
	}
}
