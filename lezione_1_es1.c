/* 18-04-2018 - esercizio */
/* 
 - Creare una lista contenente 5 voti universitari da 18 a 31 (30 e lode)
 - Visualizzare la media voti
 - Indicare il numero di lodi
 */

#include <stdio.h>
#include <stdlib.h> // malloc, free, ecc...

struct node{
    int voto;
    struct node *next;
};

int main(void)
{
    int voto, somma;
    float media;
    
    struct node *nextL;
    struct node *startL;
    
    startL = (struct node*) malloc(sizeof(struct node));
    
    do{
    printf("Inserisci il primo voto: ");
    scanf("%d", &voto);
    } while(voto < 18 || voto > 31);
    
    startL->voto = voto;
    nextL = startL;
    
    for(int i=0;i<4;i++)
    {
        do{
        printf("Inserisci il voto: ");
        scanf("%d", &voto);            
        } while(voto < 18 || voto > 31);
        
        nextL->next = (struct node*) malloc(sizeof(struct node));
        nextL = nextL->next;
        nextL->voto = voto;
    }
    
    nextL->next = NULL;
    
    printf("*** Stampa lista *** \n");
        
        // riporto nextL all'inizio
        nextL = startL;
        
        while(nextL!=NULL)
        {
            printf("Nodo: %d \n", nextL->voto);
            nextL = nextL->next;
        }
        
        printf("*** FINE stampa lista *** \n");
        
        nextL = startL;
        
        while(nextL!=NULL)
        {
            somma += nextL->voto;
            nextL = nextL->next;
        }
        
        media = (float) somma/5;
        
        printf("La media = %f\n", media);
    
        return 1;
}
