#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}Node;

Node *crea_da_file(FILE *fp){
    
    Node *startL = NULL;
    Node *nextL = NULL;
    
    int data;
    
    startL = (Node *)malloc(sizeof(Node));
    
    if(startL == NULL){
        printf("Errore nell'allocazione di memoria\n");
        return NULL;
    }
    else{
        fscanf(fp, "%d", &data);
        
        startL -> data = data;
        nextL = startL;
        
        while(fscanf(fp, "%d", &data) != EOF){
            nextL -> next = (Node *)malloc(sizeof(Node));
            nextL = nextL -> next;
            nextL -> data = data;
        }
        
        nextL -> next = NULL;
        
        return startL;
        
    }
}

void stampa(Node *list){
	Node *tmp = list;

	while(tmp != NULL){
		printf("%d ---> ", tmp -> data);
		tmp = tmp -> next;
	}
	printf("NULL\n\n");
}

Node *inverti(Node *list){
	Node *tmp = list;
	Node *startL = NULL;
	Node *nextL;

	while(tmp != NULL){
		nextL = (Node *)malloc(sizeof(Node));
		nextL -> data = tmp -> data;
		nextL -> next = startL;
		startL = nextL;
		tmp = tmp -> next;
	}

	return startL;
}

void main(int argc, char *argv[]){
	
	if(argc != 2){
		printf("Formato da inserire <nome eseguibile> <lista1.txt>\n\n");
		return;
	}

	printf("Questo programm crea una lista dal file 'lista1.txt', per poi crearne un'altra invertita\n" );
	system("PAUSE");

	Node *l1, *l2;

	FILE *fp= fopen(argv[1], "r");

	if(fp == NULL){
		printf("Apertura Fallita\n");
		return;
	}

	l1 = crea_da_file(fp);
	fclose(fp);

	printf("Lista l1: ");
	stampa(l1);

	l2 = inverti(l1);
	printf("Lista l2: ");
	stampa(l2);

	system("PAUSE");
}