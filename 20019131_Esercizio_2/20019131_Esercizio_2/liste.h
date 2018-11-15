struct node{
	int data;
	struct node *next;
};

typedef struct node Nodo;

Nodo *crea_da_file(FILE *fp);
void stampa(Nodo *l);
void pari(FILE *fp, Nodo *l);
void massimo (Nodo *l);
void minimo (Nodo *l);
