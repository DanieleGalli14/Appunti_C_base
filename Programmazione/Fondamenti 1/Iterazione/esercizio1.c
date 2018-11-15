#include <stdio.h>

void main()
{

int i, x, m, n;


    printf ("Inserire quanti valori si vuole confrontare: \n");
    scanf ("%d", &n);
    
    printf ("Inserire valore: \n");
    scanf ("%d", &x);
    
    m=x;
        
    for (i=0; i<n-1; i++)
    {
        printf ("Inserire valore: \n");
        scanf ("%d", &x);
        if (x>m)
            m=x;
    }
    
 
    printf ("Il massimo è %d\n", m);
}
