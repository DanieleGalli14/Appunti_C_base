/* Ricerca LINEARE */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node Node; /* "Node" e' un alias di "struct node" */

/* prototipazione */

Node * lista_leggi();
void lista_stampa(Node * list);
int lista_cerca(Node * startL, int search);

main()
{
    Node *list;
    int x;
    int found;

    /* CREAZIONE E INSERIMENTO DI DATI IN UNA LISTA NUMERICA */

    printf("\n");
    printf("*** Inserimento di una lista numerica ***");
    printf("\n");

    list = lista_leggi();

    /* STAMPA A VIDEO DI UNA LISTA NUMERICA */

    printf("\n");
    printf("*** Stampa a video di una lista numerica ***");
    printf("\n");

    lista_stampa(list);

    /* RICERCA */

    printf("\n");
    printf("*** Ricerca ***");
    printf("\n");

    printf("Inserisci il dato da cercare: ");
    scanf("%d", &x);

    found = lista_cerca(list, x);

    if (found == 0)
        printf("Elemento non trovato\n");

    if (found!=0)
        printf("Elemento trovato\n");

}

/**
* @FUNZIONE lista_cerca
* @PARAM: il puntatore alla testa della lista, il valore da cercare (search)
* @RETURN: 1 se trovato, 0 se non trovato
*/

int lista_cerca(Node * startL, int search)
{
    int trovato;
    if (startL == NULL)
    {
        trovato = 0;
    }
    else
    {
        trovato = 0;
        while(startL!=NULL)
        {
            if (startL->data == search)
            {
                trovato = 1;
                break;
            }
            startL = startL->next;
        }
    }
    return trovato;
}


/**
* @FUNZIONE lista_leggi
* @PARAM: -
* @RETURN: il puntatore alla testa della lista
*/
Node * lista_leggi()
{
    int i, n;

    Node *startL; /* puntatore al primo elemento (testa) della lista */
    Node *nextL; /* puntatore agli elementi successivi della lista */

    do
    {
        printf("Quanti elementi si vogliono inserire: ");
        scanf("%d", &n);
        if (n<=0)
            printf("Il numero degli elementi deve essere positivo \n");
    }
    while (n<=0);

    startL = NULL; /* inizialmente il puntatore al primo elemento e' nullo (non ci sono elementi) */
    nextL = NULL; /* inizialmente il puntatore agli elementi successivi e' nullo (non ci sono elementi) */

     /* creazione del primo elemento */
    printf("Inserisci il valore del nodo 1: ");
    startL = (Node *)malloc(sizeof(Node));
    scanf("%d", &startL->data); /* memorizza il valore inserito da tastiera nel membro inf della lista */

    nextL = startL;

    for(i=2; i<=n; i++)
    {
        /* crea un nuovo nodo e lo fa puntare dal campo next del nodo corrente */
        nextL->next = (Node *)malloc(sizeof(Node));
        nextL = nextL->next;

        printf("Inserisci il valore del nodo %d: ", i);
        scanf("%d", &nextL->data);
    }

    nextL->next = NULL; /* concluso il ciclo il campo next dell'ultimo nodo e' settato a NULL */

    return startL; /* restituisce il puntatore alla testa della lista */
}

/**
* @FUNZIONE lista_leggi
* @PARAM: puntatore alla lista
* @RETURN: -
*/
void lista_stampa(Node * startL)
{
    if (startL == NULL)
        printf("La lista e' vuota\n");
    else
    {
        printf("Il contenuto della lista e' il seguente: \n");
        while(startL!=NULL)
        {
            printf("%d --> ", startL->data);
            startL = startL->next;
        }
        printf("NULL\n");
    }
}
