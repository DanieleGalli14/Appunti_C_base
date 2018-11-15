/*  Scrivere un programma che riceva in input una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Terminato l’inserimento
della sequenza di numeri, il programma deve verificare se gli elementi del
vettore sono tutti uguali tra loro.*/

#include <stdio.h>
void main ()

{

int dim1,dim2, i, u;

printf ("Determina la dimensione del primo Vettore\n");
scanf ("%d", &dim1);

printf ("Determina la dimensione del secondo Vettore\n");
scanf ("%d", &dim2);

int v1[dim1], v2[dim2];

printf ("Inserisci i valori negli indici del primo Vettore:\n");

for (i=0; i<dim1; i++)
    scanf ("%d", &v1[i]);

printf ("\n");

printf ("Inserisci i valori negli indici del secondo Vettore:\n");

for (i=0; i<dim2; i++)
    scanf ("%d", &v2[i]);

printf ("\n");
{
u=1;
if (dim1==dim2)
{
    for (i=0; i<dim1 && u==0; i++);
    
    if (v1[i]!=v2[i])
        u=0;
}

if (u==1)
    printf ("I Vettori sono uguali\n");
else 
    printf ("I Vettori sono diversi\n");
    
}

else
    printf ("I Vettori sono diversi\n");
}
