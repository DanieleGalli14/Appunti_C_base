#include <stdio.h>

void main () {
    
    float x, y, h, area;
    
    printf ("Inserire valore di Base 1: ");
    scanf ("%f", &x);
    
    printf ("Inserire valore di Base 2: ");
    scanf ("%f", &y);
    
    printf ("Inserire valore di Altezza: ");
    scanf ("%f", &h);
    
    area= ((x+y)*h)/2;
    
    printf ("L'area del Trapezio vale %f", area);
    
}
