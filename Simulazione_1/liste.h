#define DIM 10

struct node{
    char nome[DIM];
    float temperatura;
    int prom;
    struct node *next;
};

typedef struct node Node;

Node *crea_da_file(FILE *fp);
Node *lista_fredda (Node *l1);
void stampa (Node *list);
void ricerca_citta(Node *list, char ricerca[]);
void scambia_int(int *a, int *b);
void scambia_float(float *a, float *b);
void scambia_string(char a[], char b[]);
void ordina_per_temperatura(Node *list);
void crea_file_ordinato(Node *list, FILE *fp);