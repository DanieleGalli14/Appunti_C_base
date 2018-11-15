/*Scrivere un programma che stampi in ordine inverso una sequenza di numeri
inseriti dall’utente memorizzandola in un array.*/

#include <stdio.h>
void main ()
{

int dim, i;

printf ("Determina la dimensione del Vettore\n");
scanf ("%d", &dim);

int v[dim];

printf ("Inserisci i valori negli indici:\n");

for (i=0; i<dim; i++)
{
    scanf ("%d", &v[i]);
}

printf ("\n");
    
for (i=dim-1; i>=0; i--)
    printf ("%d", v[i]);
    printf ("\n");
}
