/* 18-04-2018 */

#include <stdio.h>
#include <stdlib.h> // malloc, free, ecc...

// 1: la tipologia del nodo
struct node
{
    int data; // numero intero
    struct node *next;
};

int main()
{
    int i;
    
    int x;
    
    int *pi;
    
    // 2: il puntatore al primo nodo (head)
    struct node *startL;
    // 3: il puntatore ai nodi successivi al primo (next)
    struct node *nextL;
    
    printf("Inserisci un numero intero: ");
    
    scanf("%d",&x);
    
    printf("*** Creazione lista *** \n");
    
    // creare un nodo (il primo) della lista. Se NULL non può creare il nodo
    
    startL = (struct node *) malloc(sizeof(struct node));
    
    if (startL!=NULL)
    {
        startL->data = x;
        nextL = startL;
        
        // creare i nodi successivi al primo
        for(i=0;i<3;i++)
        {
            // PER PRIMO 
            // il campo next del nodo attuale punta ...  <-- crea un nodo e restituisce il suo indirizzo (puntatore)
            nextL->next = (struct node *) malloc(sizeof(struct node));
            if (nextL->next!=NULL)
            {
                // il puntatore viene spostato ... <-- al nuovo nodo creato
                nextL = nextL->next;
                // nel nodo viene inserito il dato
                nextL->data = x;
            }   
        }
        // l'ultimo nodo contiene il campo next "vuoto" (NULL) perché non punta a nuovi nodi
        nextL->next = NULL;
        
        printf("*** FINE creazione lista *** \n");
        
        // visualizza la lista a video
    
        printf("*** Stampa lista *** \n");
        
        // riporto nextL all'inizio
        nextL = startL;
        
        while(nextL!=NULL)
        {
            printf("Nodo: %d \n", nextL->data);
            nextL = nextL->next;
        }
        
        printf("*** FINE stampa lista *** \n");
    
    }
    else // non può creare il primo nodo
    {
       printf("*** Impossibile creare i nodi *** \n"); 
       return -1;
    }
    
    
    
    return 1; // programma terminato correttamente
}

