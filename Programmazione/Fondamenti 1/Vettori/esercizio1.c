/*Scrivere un programma che memorizzi in un array e stampi una sequenza
di numeri inseriti dall’utente*/

#include <stdio.h>
void main ()
{

int dim, v[dim], i;

printf ("Determina la dimensione del Vettore\n");
scanf ("%d", &dim);

printf ("Inserisci i valori negli indici:\n");
for (i=0; i<dim; i++)
    scanf ("%d", &v[i]);

printf ("\n");
    
for (i=0; i<dim; i++)
    printf ("%d ", v[i]);
}
