#include <stdio.h>

void main (){
    
    int x, r;
    
    printf ("Inserire valore: ");
    scanf ("%d", &x);
    
    r= x%2;
    
    if (r==0)
        printf ("Il numero digitato è pari\n");
    
    else 
        printf ("Il numero digitato è dispari\n");
        
}
