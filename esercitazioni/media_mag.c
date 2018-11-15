#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
	int data;
	struct node *next;
}Node;

Node *crea_lista(int n){
    
    Node *startL = NULL;
    Node *nextL = NULL;
    
    int i;
    int inf = 0;
    int sup = 100;
    
    startL = (Node *)malloc(sizeof(Node));
    
    if(startL == NULL){
        printf("Errore nell'allocazione di memoria\n");
        return NULL;
    }
    else{
        
        startL -> data = rand() % (sup - inf + 1) + inf;
        nextL = startL;
        
        for(i = 2; i <= n; i++){
            nextL -> next = (Node *)malloc(sizeof(Node));
            nextL = nextL -> next;
            nextL -> data = rand() % (sup - inf + 1) + inf;
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

float lista_media(Node *list, int n){
	Node *tmp = list;
	int somma = 0;
	float media;
	Node *l = tmp;

	while(l != NULL){
		somma = somma + tmp->data;
		l = l -> next;
	}

	media = (float) somma / n; 
	return media;
}

void main(int argc, char *argv[]){

	if(argc != 2){
		printf("Eseguire con i seguenti argomenti <nome eseguibile> <lunghezza lista>\n\n");
			return;
	}

	printf("Questo programma crea una lista con valori casuali, di lunghezza indicata dagli argomenti, e dopo la visualizzazione ne crea un'altra che contiene i valori maggiori della media\n" );
	system("PAUSE");

	Node *l1, *l2;
	float media;
	srand(time(NULL));

	int n = atoi(argv[1]);
	l1 = crea_lista(n);
	printf("Lista l1: ");
	stampa(l1);
	system("PAUSE");

	media = lista_media(l1, n);
	printf("Media %.2d\n", media);

	/*n = ;
	l2 = crea_lista(n2);
	ordina(l2);
	printf("Lista l2: ");
	stampa(l2);*/


	system("PAUSE");
}