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

// versione ricorsiva
void lista_visualizza_ric(Nodo * lista)
{
    // caso base
    if (lista==NULL) return;
    
    // caso ricorsivo
    printf("Nodo: %d \n", lista->data);
    lista_visualizza_ric(lista->next);
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

int lista_lunghezza_ric(Nodo * lista)
{
     // caso base
    if (lista==NULL) return 0;
    
    // caso ricorsivo
    return 1 + lista_lunghezza_ric(lista->next);
}

// FUNZIONE RICORSIVA CHE SOMMA I NODI DELLA LISTA
int lista_somma_ric(Nodo * lista)
{
    if(lista == NULL)
        return 0;
    
    else
        return (lista-> data) + lista_somma_ric(lista->next);
}

float lista_media(Nodo * lista)
{
    int somma = 0;
    
    float media;
    
    // il puntatore al primo nodo (head)
    Nodo *startL = lista;
    
    // il puntatore ai nodi successivi al primo (next)
    Nodo *nextL;
    
    // riporto nextL all'inizio
    nextL = startL;
        
    while(nextL!=NULL)
    {
        somma = somma + nextL->data;
        nextL = nextL->next;
    }
    
    media = (float) somma / lista_lunghezza_ric(lista);
    
    return media;
}

int main(int argc, char * argv[])
{
    FILE * fp;
    
    Nodo * lista;
    
    float media;
    
    // fp è il puntatore al file aperto in lettura
    fp = fopen(argv[1],"r");
    
    if (fp!=NULL)
    {
        lista = lista_crea(fp);
        // lista_visualizza(lista);
        lista_visualizza_ric(lista);
        
        /*media = lista_media(lista);*/
        
        int somma = lista_somma_ric(lista);
        
        int lenght = lista_lunghezza_ric(lista);
        
        
        printf("Somma della lista %d, lunghezza della lista %d\n", somma, lenght);
        media = (float)somma / (float) lenght;
        
        printf("La media vale: %f \n", media); //4,5000000
        
        fclose(fp);
    }
    else
    {
        printf("Impossibile leggere dal file!\n");
    }
    return 1;
}
