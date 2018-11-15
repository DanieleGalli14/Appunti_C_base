/* Scrivere un programma che memorizzi in un array una sequenza di numeri
inserita dall’utente e stampi il valore massimo.*/

#include <stdio.h>
void main ()

{

int dim, i, u, max;

printf ("Determina la dimensione del Vettore\n");
scanf ("%d", &dim);

int v[dim];

printf ("Inserisci i valori negli indici:\n");

for (i=0; i<dim; i++)
    scanf ("%d", &v[i]);

printf ("\n");

u=1;
    
for (i=0; i<dim; i++)
{
    if (i==0)
        max=v[i];
    else
        if (v[i]>max)
            max=v[i];
}

printf ("Il massimo è %d\n", max);

}
