//dati 5 voti, calcolare la media aritmetica

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
        do
        {
            printf ("Inserisci il voto (31=30 e lode): ");
            scanf ("%d", &voto);
        }
        while (voto<18 ||voto>31);
        
        somma=somma+voto;
    }
    
    media=(float)somma/n;
    
    printf ("La media vale %.2f", media);
    printf ("\n");
    
}
