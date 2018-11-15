/* Scrivere un programma che fa inserire una sequenza di numeri all’utente
e un numero da cercare. Dopo aver esaminato la sequenza di numeri il
programma deve stampare se il numero da cercare `e presente o no.*/

#include <stdio.h>
void main ()

{

int dim, i, u, x;

printf ("Determina la dimensione del Vettore\n");
scanf ("%d", &dim);

int v[dim];

printf ("Inserisci i valori negli indici:\n");

for (i=0; i<dim; i++)
    scanf ("%d", &v[i]);

printf ("\n");

printf ("Inserire il numero da cercare\n");
scanf ("%d", &x);

u=1;
    
for (i=0; i<dim&&u==1; i++)
{
    if (v[i]==x)
        u=0;
    else
        u=1;
}

if (u==0)
    printf ("Il valore %d è presente nel Vettore\n", x);

else 
    printf ("Il valore %d NON è presente nel Vettore\n", x);

}
