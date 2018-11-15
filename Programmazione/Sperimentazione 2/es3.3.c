/*Scrivere un programma che scambia il contenuto di due array.*/
#include <stdio.h>
#define SIZE 5

int main(void)

{
  int a[SIZE], b[SIZE], i, c;
  
  for (i=0; i<SIZE; i++)
  {
      a[i]=i;
      b[i]=SIZE-1-i;
  }

  for (i=0; i<SIZE; i++)
  {
      a[i]= c;
      b[i]=a[i];
      b[i]=c;
  }
    
}
