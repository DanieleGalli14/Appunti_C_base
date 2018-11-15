#include <stdio.h>

void main (){
    
    int a, b;
    char op;
    
    printf ("Inserire i valori: ");
    scanf ("%d", &a);
    scanf ("%d", &b);
    printf ("Inserire l'operatore: (+,-,*,/) ");
    scanf ("\n%c", &op);
    

    switch (op)
    {
        case '+':
        printf ("La somma è %d\n", a+b);
        break;
        
        case '-':
        printf ("La differenza è %d\n", a-b);
        break;
        
        case '*':
        printf ("Il prodotto è %d\n", a*b);
        break;
        
        case '/':
        printf ("Il quoziente è %d\n", a/b);
        break;
        
        default:
            printf ("Errore: Operatore sconosciuto\n" );
            break;
            

}
}
