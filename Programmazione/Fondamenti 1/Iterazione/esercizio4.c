#include <stdio.h>

void main()
{
    int x, somma;
    
    somma=0;
    
    do
    {
        printf ("Inserire valore:\n");
        scanf ("%d", &x);
        somma=somma+x;
    }
    while (x!=0);
    
}
