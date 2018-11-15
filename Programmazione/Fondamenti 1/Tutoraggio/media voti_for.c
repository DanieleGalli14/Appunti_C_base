//dati 5 voti, calcolare loa media aritmetica

#include <stdio.h>

void main()

{
    int n=5; //numero di voti
    int i; //contatore del ciclo
    int voto; 
    int somma; //variabile per il voto
    float media;
    
    printf ("\n");
    
    somma=0;
    
    for (i=0; i<n; i++)
    {
        printf ("Inserisci il voto: ");
        scanf ("%d", &voto);
        somma=somma+voto;
    }
    
    media=somma/n;
    
    printf ("La media vale %.2f", media);
    printf ("\n");
    
}
