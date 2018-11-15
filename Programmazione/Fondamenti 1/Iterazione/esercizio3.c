#include <stdio.h>

void main()
{
    int i, x, n, somma;
    
    somma=0;
    printf ("Inserire il numero di valori da sommare:\n");
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        somma= somma+i;
        
    }
    
    printf ("La somma vale %d\n", somma);
                    
}
