/*Scrivere un programma che, sfruttando le funzioni, permetta di calcolare
l’area di un cerchio o di un quadrato. L’utente inserisce un numero,
dichiarando se si tratta del raggio di un cerchio o del lato di un quadrato.
Se l’utente inserisce un numero negativo viene visualizzato un errore, altrimenti
il sistema calcola l’area in modo appropriato.*/

#include <stdio.h>
#DEFINE PI=3.14

void main ()

//FUNZIONE PER IL TIPO DI FIGURA
char f()
{
    char a;
    
    do
    {
      printf ("Indicare se si vuole misurare un Cerchio (c) o un quadrato (q):\n");
      scanf ("%c", &a);
    }
    while (a!='c' && a!='q');
    
    return a;
}

float area_cerchio ()
{
    float r, area;
    
    printf ("Inserire valore del Raggio:\n");
    scanf ("%f", &r);
    
    area=r*r*PI;
    
    return area;
}

float area_quadrato()
{
    
                int l, area;
                
                printf ("Inserire la lunghezza del lato del quadrato");
                scanf ("%d", &l);
                
                area=l*l;
                
                return area;
}

int main()
{
        char tipo;
        float a;
        
        tipo=f();
        if (tipo=='c')
            a=area_cerchio();
        else
            a=area_quadrato();
        
        printf("l'area e' %f\n", a);
    
        return 1;
}
