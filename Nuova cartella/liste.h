#define DIM 5

struct node{
	char nome [DIM];
	int voto;
	int peso;
	struct node *next;
};

typedef struct node Node;

Node *crea_da_file();
void stampa(Node *list);
void voto_pesato(Node *list, char matricola[]);
Node *crea_nuovo(Node *list, char matricola[]);
void crea_file(Node *list);
