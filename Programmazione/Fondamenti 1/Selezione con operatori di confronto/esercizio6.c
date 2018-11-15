#include <stdio.h>

void main (){
    
    int x, y, z;
    
    printf ("Inserire i tre numeri da confrontare: ");
    scanf ("%d", &x);
    scanf ("%d", &y);
    scanf ("%d", &z);
    
    if (x>y)
    
        if (x>z)
            printf ("Il Numero massimo è %d\n", x);
        
        else 
            printf ("Il Numero massimo è %d\n", z);
        
    else 
        if (y>z)
            printf ("Il Numero massimo è %d\n", y);
        else
            printf ("Il Numero massimo è %d\n", z);
        
    
        
}
