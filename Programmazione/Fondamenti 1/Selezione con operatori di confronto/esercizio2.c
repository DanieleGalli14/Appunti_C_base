#include <stdio.h>

void main (){
    
    int x, y;
    
    printf ("Inserire il primo numero: ");
    scanf ("%d", &x);
    
    printf ("Inserire il secondo numero: ");
    scanf ("%d", &y);
    
    if (x>y)
        printf ("Il numero maggiore è %d\n", x);
    
    else 
        printf ("Il numero maggiore è %d\n", y);
        
}
