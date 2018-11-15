#include <stdio.h>

void main ()

{
    int n, x, r, conta;
    
    printf ("Inserire valore di n: ");
    scanf ("%d", &n);
    
    x=1;
    conta=0;   
    
    while (x<=n)
    {
        r=n%x;
        if (r==0)
        {
            printf ("%d è divisibile per %d\n", n, x);
            conta++;
        }
    
        x++;
    }
    
    if (conta==2)
        printf ("%d è un numero primo\n", n);
}
