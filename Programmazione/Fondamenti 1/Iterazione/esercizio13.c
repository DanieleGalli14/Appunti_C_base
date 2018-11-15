#include <stdio.h>

void main ()

{
    int i, n, r;
    
    printf ("Inserire valore Massimo: ");
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        printf ("%d\t", i);
        r=i%4;
        if (r==0)
            printf ("\n");
        
    }
    printf ("\n\n");
}
