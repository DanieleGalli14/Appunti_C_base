#define DIM 10

struct node{
    char nome[DIM];
    int voto;
    int cfu;
    struct node *next;
};

typedef struct node Node;

Node *crea_da_file(FILE *fp);
void stampa (Node *list);
void media_matricola(Node *list, char ricerca[]);
Node *crea_matricola(Node *list, char ricerca[]);
int esiste(Node *list, char ricerca[]);
void scambia_int(int *a, int *b);
void scambia_string(char a[], char b[]);
void ordina(Node *list);
void crea_file_matricola(Node *list, FILE *fp);