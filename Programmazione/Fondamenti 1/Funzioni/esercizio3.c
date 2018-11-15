/*Scrivere un programma che calcola il fattoriale di un numero. Il programma
conterr`a una funzione denominata fatt, che calcola il fattoriale
di un numero intero passato come parametro e che restituisce il risultato.
Si consiglia di utilizzare il tipo double per il valore di ritorno in quanto la
funzione fattoriale cresce molto velocemente. Il calcolo del fattoriale deve
essere ottenuto in maniera iterativa (ciclo for o ciclo while).
f att(N) = 1 ∗ 2 ∗ 3 ∗ . . . ∗ (N)
f att(0) = 1*/

#include <stdio.h>
double fattoriale (int);
double leggi_input ();
double k;

double fattoriale (int x)
{    
 double f, i;
 
 for (i=1; i<=x; i++)
     f=f*i;
    k++;
 return 1;
}

double leggi_input ()
{
    double n, i;
    
    k--;
    i=1;
    
    do
    {
        printf ("Inserire valore da esaminare:\n");
        scanf ("%d", &n);
        if (n<0)
            printf ("ERRORE! Non sono ammessi valori negativi\n");
    }
    while (n<0);
    
    return n;
}

double main ()
{
    double in, out;
    
    in=leggi_input();
    out=fattoriale(in);
    printf ("Il fattoriale vale %d\n", out);
    k=0;
    return 1;
}
