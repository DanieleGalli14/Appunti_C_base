#include <stdio.h>

void main () {
    
    float x, y, z, a, somma, media, prodotto;
    
    printf ("Inserire primo numero: ");
    scanf ("%f", &x);
    
    printf ("Inserire secondo numero: ");
    scanf ("%f", &y);
    
    printf ("Inserire terzo numero: ");
    scanf ("%f", &z);
    
    printf ("Inserire quarto ed ultimo numero: ");
    scanf ("%f", &a);
    
    somma= x+y+z+a;
    
    media= (x+y+z+a)/2;
    
    prodotto= x*y*z*a;
    
    printf ("La somma è %f, la media è %f e il prodotto è %f", somma, media, prodotto);
    
}
