// Esercizio
// dato un file "dati_in.txt" come argomento
// leggere il contenuto
// salvarlo in una lista
// visualizzare la lista
// scrivere in un file "dati_out.txt" come argomento la media dei valori

#include<stdio.h>
#include<stdlib.h>

// STRUTTURA DATI
struct node
{
    int data; // numero intero
    struct node *next;
};

typedef struct node Nodo;

Nodo * lista_crea(FILE * fp)
{
    int x; // variabile temporanea per la lettura del numero dal file
    
    // il puntatore al primo nodo (head)
   Nodo *startL;
   
   // il puntatore ai nodi successivi al primo (next)
   Nodo *nextL; 
   
   // creare un nodo (il primo) della lista. Se NULL non può creare il nodo
    
   startL = (Nodo *) malloc(sizeof(Nodo));
    
    if (startL!=NULL)
    {
        // legge la prima riga del file
        fscanf(fp, "%d", &x);
        
        startL->data = x;
        nextL = startL;
        
        // creare i nodi successivi al primo
        while (fscanf(fp, "%d", &x) != EOF)
        {
            // PER PRIMO 
            // il campo next del nodo attuale punta ...  <-- crea un nodo e restituisce il suo indirizzo (puntatore)
            nextL->next = (Nodo *) malloc(sizeof(Nodo));
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
    }
    
    return startL;
}

void lista_visualizza(Nodo * lista)
{
    // il puntatore al primo nodo (head)
    Nodo *startL = lista;
    
    // il puntatore ai nodi successivi al primo (next)
    Nodo *nextL;
    
    // riporto nextL all'inizio
    nextL = startL;
        
    while(nextL!=NULL)
    {
            printf("Nodo: %d \n", nextL->data);
            nextL = nextL->next;
    }
    
}

int lista_lunghezza(Nodo * lista)
{
    int conta = 0;
    
    // il puntatore al primo nodo (head)
    Nodo *startL = lista;
    
    // il puntatore ai nodi successivi al primo (next)
    Nodo *nextL;
    
    // riporto nextL all'inizio
    nextL = startL;
        
    while(nextL!=NULL)
    {
        conta++;
        nextL = nextL->next;
    }
    
    return conta;
}


Nodo * lista_cancella_testa(Nodo * lista)
{
    Nodo *startL = lista;
     
    // porto nextL all'inizio
    Nodo * newStartL;
    
    newStartL = startL->next;
    
    free(startL);    
    
    return newStartL;
}


Nodo * lista_cancella_coda(Nodo * lista)
{
    Nodo *startL = lista;
     
    // porto nextL all'inizio
    Nodo * nextL = startL;
        
    while(nextL->next->next!=NULL)
    {
        nextL = nextL->next;
    }
    
    free(nextL->next);
    nextL->next=NULL;
    
    return startL;
}

Nodo * lista_cancella_interna(Nodo * lista, int pos)
{
    int i = 0;
    
    Nodo *startL = lista;
     
    // porto nextL all'inizio
    Nodo * nextL = startL;
    
    Nodo * tempL;
        
    while(nextL->next!=NULL)
    {
        if (i == pos)
        {
            tempL = nextL->next;
            free(tempL);
        }
        else
        {
            nextL = nextL->next;
        }
        
    }
    
    return startL;
}



int main(int argc, char * argv[])
{
    int pos;
    
    FILE * fp;
    
    Nodo * lista;
    
    float media;
    
    // fp è il puntatore al file aperto in lettura
    fp = fopen(argv[1],"r");
    
    if (fp!=NULL)
    {
        lista = lista_crea(fp);
        
        printf("\n *** Lista originale *** \n");
        lista_visualizza(lista);
        
        printf("\n *** Cancellazione testa *** \n");
        lista = lista_cancella_testa(lista);
        lista_visualizza(lista);
        
        printf("\n *** Cancellazione coda *** \n");
        lista = lista_cancella_coda(lista);
        lista_visualizza(lista);
        
        printf("\n *** Cancellazione interna *** \n");
        
        do
        {
            printf("Inserisci la posizione del nodo da cancellare: ");
            scanf("%d", &pos);
        }
        
        while (pos > 0 && pos < lista_lunghezza(lista)-1)
        
        lista = lista_cancella_interna(lista, pos);
        lista_visualizza(lista);
        
        fclose(fp);
    }
    else
    {
        printf("Impossibile leggere dal file!\n");
    }
    return 1;
}
