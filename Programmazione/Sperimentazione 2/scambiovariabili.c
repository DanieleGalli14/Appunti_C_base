#include <stdio.h>
void main ()
{
    int a, b, c;
    
    a=2;
    b=3;
    
    c=a;
    a=b;
    b=c;
    
    printf ("%d, %d", a,b);
    
}
