#include <stdio.h>

void main (){
    
    float x;
    
    printf ("Inserire il numero da analizzare: ");
    scanf ("%f", &x);
    
    if (x>0)
        printf ("Il valore assoluto del numero è %f\n", x);
    
    else
        printf ("Il valore assoluto del numero è %f\n", -x);
        
}
