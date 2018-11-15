#include <stdio.h>

void main ()

{
    int a,b, MCD;
    
    printf ("Inserire primo valore: ");
    scanf ("%d", &a);
    printf ("Inserire secondo valore: ");
    scanf ("%d", &b);
    
    while (a!=b)
        if (a>b)
            a=a-b;
        
        else
            b=b-a;
        
        MCD=a;
    
    printf ("Il MCD è %d\n", MCD);
    
    
}
