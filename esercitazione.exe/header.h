#include <stdio.h>
#define DIM 100

struct node{
	char nome [DIM];
	char nazione [DIM];
	float superficie;
	int abitanti;
	int zona;
	struct node *next;
};

typedef struct node Node;
 

Node *crealista();

void stampa(Node *list);


