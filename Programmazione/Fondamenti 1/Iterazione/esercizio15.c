#include <stdio.h>

void main ()

{
    int r, c, i;
    
    printf ("Inserire valore base: ");
    scanf ("%d", &r);
    printf ("Inserire valore altezza: ");
    scanf ("%d", &c);
    

    for (i=1; i<=r; i++)
    {   printf ("X");
        printf ("\n");
    }
    
    {
    for (i=1; i<=c; i++)
        printf ("X");
        printf ("\n");
    }
      
    
}
