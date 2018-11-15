//8) Scrivere un programma che legge n da tastiera e ne calcola il fattoriale (n!).
//Esempio: n=4   fatt(n)=1*2*3*4=24
//         n=1   fatt(n)=1
//         n=0   fatt(n)=1

#include <stdio.h>

void main ()
{
    int n, i, f;
    
    printf ("Inserire il valore n: ", n);
    scanf ("%d", &n);
    
    f=1;
  
    if (n>1)
    {
        for (i=1; i<=n; i++)
        {
            f=f*i;
        }
    }
        
    printf ("Il fattoriale vale %d\n", f);
            
}
    
