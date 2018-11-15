#include <stdio.h>

void main (){
    
    int x;
    
    printf ("Inserire il numero da analizzare: ");
    scanf ("%f", &x);
    
    if (x==0)
        printf ("Il numero digitato è neutro\n");
    
    else
        if (x<0)
        printf ("Il numero digitato è negativo\n");
    else
        printf ("Il numero digitato è positivo \n");
    
        
}
