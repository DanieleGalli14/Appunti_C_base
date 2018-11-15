/* Scrivere un programma che memorizzi in un array una sequenza di numeri
inserita dall’utente e stampi come output gli elementi pari.*/

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
    if (v[i]%2==0)
        printf ("%d\n", v[i]);
}
