#include <stdio.h>

void main (){
    
    int a, b, r;
    
    printf ("Inserire il primo numero: ");
    scanf ("%d", &a);
    
    printf ("Inserire il secondo numero: ");
    scanf ("%d", &b);
    
    r=a%b;
    
    if (r==0)
        printf ("Il numero %d è divisibile per %d\n", a, b);
    
    else
        printf ("Il numero %d non è divisibile per %d\n", a, b);
        
}
