/*Scrivere un programma che permetta di inserire due vettori lunghi N e
stampi un terzo vettore i cui elementi sono la somma degli elementi dei
due vettori in input. Il programma utilizza 3 funzioni:
• Inserisci elementi nel vettore
• Calcola somma
• Stampa vettore*/

#include <stdio.h>


void carica_vettore(int v[], int dim) 
{
    int i;
    for (i=0; i<dim; i++)
        scanf ("%d", &v[i]);
}


void somma_vettori(int v1[], v2[], v3[], dim)
{
  for (i=0; i<dim; i++)
      v3[i]=v1[i]+v2[i];
}

void stampa_vettore (int v3, n)
{
    printf ("Il vettore Somma vale:\t");
    for (i=0; i<n; i++)
        printf ("%d\t", v3[i]);
}

int main()
{
    int n;
    
    printf("Inserire la dimensione dei Vettori\n");
    scanf("%d", n);
    
    int v1[n], v2[n], v3[n];
    
    carica_vettore(v1, n);
    carica_vettore(v2, n);
    
    somma_vettori(v1, v2, v3, n);
    stampa_vettore(v3, n);
 
    return 1;
}
