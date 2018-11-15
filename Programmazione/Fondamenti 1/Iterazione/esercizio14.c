#include <stdio.h>

void main ()

{
    int r, c, i, j, v;
    
    printf ("Inserire numero di righe: ");
    scanf ("%d", &r);
    printf ("Inserire numero di colonne: ");
    scanf ("%d", &c);
    
    v=0;
    
    for (i=1; i<=r; i++)
    {
        for (j=1; j<=c; j++)
        {
            printf ("%d\t", v);
            v++;
        }
        
        printf("\n");
    }
    
    for (i=1; i<=r; i++)
    {
        v=i-1;
        for (j=1; j<=c; j++)
        {
            printf ("%d\t", v);
            v=v+r;
        }
        
        printf("\n");
    } 
}
