#include <stdio.h>

void main (){
    
    float b,h,a;

    
    printf ("Inserire base e altezza del triangolo: ");
    scanf ("%f", &b);
    scanf ("%f", &h);
    
    a= (b*h)/2;
    
    
    if ((b>0) && (h>0))
        printf ("L'area del triangolo vale%f\n", a);
        
        else 
        printf ("Non è possibile misurare l'area del triangolo\n");
}
