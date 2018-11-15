#include <stdio.h>
void main ()

{
    int n; //numero di elementi da inserire
    int x; //valori inseriti
    int i; //ciclo
    int massimo, minimo; //servono commenti????
    int sommap=0; //somma dei pari
    int sommad=0; //somma dei dispari
    int somma=0; //somma totale
    
    printf ("Inserire quanti numeri da confrontare:\n");
    scanf ("%d", &n);
    
    printf ("Inserisci x\n");
    scanf ("%d", &x);
    x=massimo;
    x=minimo;
    sommad=sommad+x;
    somma=somma+x;
    
    for (i=0; i<n-1; i++)
    {
        printf ("Inserisci x\n");
        scanf ("%d", &x);
        
        if (i%2==0)
        {
            sommap+x;
        }
        somma=somma+x;
        
        if (x>massimo)
            massimo=x;
        if (x<minimo)
            minimo=x;
        
    }
     //stampa dei risultati       
}
