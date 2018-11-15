#include <stdio.h>
#include <math.h>

void main (){
    
    float a, b, c, delta, x, x1, x2;

    
    printf ("Inserire i coefficienti in ordine: ");
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
    
    delta= (b*b - 4*a*c);
    x= -b/ (2*a);
    x1= (-b + sqrt(delta) / (2*a));
    x2= (-b - sqrt(delta) / (2*a));
    
    
    if (delta<0)
        printf ("L'equazione è impossibile, non ammette soluzioni\n");
        
    else if (delta==0)
        printf ("La soluzione è %f\n", x);
    
    else
        printf ("Le soluzioni sono %f e %f\n", x1, x2); 
}
