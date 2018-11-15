#include <stdio.h>

void main (){
    
    int a, b;
    
    printf ("Inserire valore della casa: ");
    scanf ("%d", &a);
    printf ("Indicare Zona di residenza: ");
    scanf ("%d", &b);
    
    switch (b)
    {
        case 1:
        printf ("L' Imposta varrà €%d\n", (a*5)/100);
        break;
        
        
        case 2:
        printf ("L' Imposta varrà €%d\n", (a*10)/100);
        break;
        
        case 3:
        printf ("L' Imposta varrà €%d\n", (a*15)/100);
        break;
        
        case 4:
        printf ("L' Imposta varrà €%d\n", (a*20)/100);
        break;
        
        default:
            printf ("Errore: Zona inesistente\n" );
            break;
            

}
}
