#include <stdio.h>
#define pi 3.14

void main (){
    
    float r, c, area;
    
    printf ("Inserire la lunghezza del raggio: ");
    scanf ("%f", &r);
    
    if (r<=0)
        printf ("Il Raggio deve essere maggiore di Zero\n");
        
    else 
    {
        c=2*pi*r;
        printf ("La Circonferenza misura %f\n", c);
        
        area=r*r*pi;
        printf ("L'area misura %f\n", area);
        
}
}
