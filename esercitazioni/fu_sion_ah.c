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

void scambia(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}

void ordina(Node *l)
{
    Node *list = l;
    Node *q;

    while (list != NULL)
    {
        q = list->next;
        while (q != NULL)
        {
            if (list->data > q->data){
            	scambia(&list->data, &q->data);
        	}
	        q = q->next;
        }
        list = list->next;
    }
    return;
}

void stampa(Node *list){
	Node *tmp = list;

	while(tmp != NULL){
		printf("%d ---> ", tmp -> data);
		tmp = tmp -> next;
	}
	printf("NULL\n\n");
}

Node *fondi(Node *l1, Node *l2){
	Node *tmp1 = l1;
	Node *tmp2 = l2;
	Node *startL = NULL;
	Node *nextL = NULL;
	int i = 0;

	while(tmp1 != NULL && tmp2 != NULL){
		i++;

		if(tmp1-> data < tmp2 -> data){
			if (i==1){
				startL=(Node *)malloc(sizeof(Node));
				startL->data = tmp1 -> data;
				nextL = startL;
			}
			else{
				nextL -> next = (Node *)malloc(sizeof(Node));
				nextL = nextL -> next;
				nextL -> data = tmp1 -> data;
			}
			tmp1 = tmp1 -> next;
		}

		else{
			if (i==1){
				startL=(Node *)malloc(sizeof(Node));
				startL->data = tmp2 -> data;
				nextL = startL;
			}
			else{
				nextL -> next = (Node *)malloc(sizeof(Node));
				nextL = nextL -> next;
				nextL -> data = tmp2 -> data;
			}
			tmp2 = tmp2 -> next;
		}
	}

	while(tmp1 != NULL){
		i++;

		if (i==1){
				startL=(Node *)malloc(sizeof(Node));
				startL->data = tmp1 -> data;
				nextL = startL;
			}
			else{
				nextL -> next = (Node *)malloc(sizeof(Node));
				nextL = nextL -> next;
				nextL -> data = tmp1 -> data;
			}
			tmp1 = tmp1 -> next;
	}

	while(tmp2 != NULL){
		i++;

		if (i==1){
				startL=(Node *)malloc(sizeof(Node));
				startL->data = tmp2 -> data;
				nextL = startL;
			}
			else{
				nextL -> next = (Node *)malloc(sizeof(Node));
				nextL = nextL -> next;
				nextL -> data = tmp2 -> data;
			}
			tmp2 = tmp2 -> next;
	}

	nextL -> next = NULL;

	return startL;
}

void main(int argc, char *argv[]){

	if(argc != 3){
		printf("Eseguire con i seguenti argomenti <nome eseguibile> <lunghezza prima lista> <lunghezza seconda lista>\n\n");
			return;
	}

	printf("Questo programma crea due liste con valori casuali, di lunghezza indicata dagli argomenti, e dopo la visualizzazione vengono fuse in un'unica lista\n" );
	system("PAUSE");

	Node *l1, *l2, *l3;
	srand(time(NULL));

	int n1 = atoi(argv[1]);
	l1 = crea_lista(n1);
	ordina(l1);
	printf("Lista l1: ");
	stampa(l1);

	int n2 = atoi (argv[2]);
	l2 = crea_lista(n2);
	ordina(l2);
	printf("Lista l2: ");
	stampa(l2);

	l3 = fondi(l1, l2);
	printf("Lista l3: ");
	stampa(l3);

	system("PAUSE");
}