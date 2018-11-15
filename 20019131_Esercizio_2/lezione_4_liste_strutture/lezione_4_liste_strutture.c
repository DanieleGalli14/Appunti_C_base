// lezione 4 strutture

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// STRUTTURA DATI

struct contatto
{
    char nome[64];
    char cognome[64];
    int numero;
};

typedef struct contatto Contatto;

struct node
{
    Contatto data; // data di tipo Contatto
    struct node *next;
};


typedef struct node Nodo;

Nodo * lista_crea(FILE * fp)
{
    int x; // variabile temporanea per la lettura del numero dal file
    
    int temp_numero;
    char temp_nome[64];
    char temp_cognome[64];
    
    // il puntatore al primo nodo (head)
   Nodo *startL;
   
   // il puntatore ai nodi successivi al primo (next)
   Nodo *nextL; 
   
   // creare un nodo (il primo) della lista. Se NULL non può creare il nodo
    
   startL = (Nodo *) malloc(sizeof(Nodo));
    
    if (startL!=NULL)
    {
        // legge la prima riga del file
        fscanf(fp, "%s;%s;%d", temp_nome, temp_cognome, &temp_numero);
        
        // startL->data.nome = temp_nome;
        strcpy(startL->data.nome, temp_nome);
        strcpy(startL->data.cognome, temp_cognome);
        startL->data.numero = temp_numero;
        
        nextL = startL;
        
        // creare i nodi successivi al primo
        while (fscanf(fp, "%s;%s;%d", temp_nome, temp_cognome, temp_numero) != EOF)
        {
            // PER PRIMO 
            // il campo next del nodo attuale punta ...  <-- crea un nodo e restituisce il suo indirizzo (puntatore)
            nextL->next = (Nodo *) malloc(sizeof(Nodo));
            if (nextL->next!=NULL)
            {
                // il puntatore viene spostato ... <-- al nuovo nodo creato
                nextL = nextL->next;
                // nel nodo viene inserito il dato
                strcpy(nextL->data.nome, temp_nome);
                strcpy(nextL->data.cognome, temp_cognome);
                nextL->data.numero = temp_numero;
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
            printf("Nodo: %s;%s;%d \n", nextL->data.nome, nextL->data.cognome, nextL->data.numero);
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
        
        fclose(fp);
    }
    else
    {
        printf("Impossibile leggere dal file!\n");
    }
    return 1;
}
