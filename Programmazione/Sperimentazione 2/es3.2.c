/*Il programma scrive tutti i valori dell'array di posto pari*/
#include <stdio.h>
#define SIZE 1000
#define DASTAMPARE 1
#define DANONSTAMPARE 0

int main (void)
{
    unsigned int array [SIZE];
    unsigned int i, j;
    
    for (i=0; i<SIZE; i++)
        array[i]=DASTAMPARE;
    
    for (i=2; i<SIZE; i++)
        if (array[i]==DASTAMPARE)
            for (j=i+1; j<SIZE; j++)
                if (j%i==0)
                    array [j]=DANONSTAMPARE;
                
    for (i=2; i<SIZE; i++)
        if (array[i]==DASTAMPARE)
            printf ("%u\n", i);
}
