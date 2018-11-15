#include <stdio.h>

void main () {
    
    int x, y, z;
    
    printf ("Inserire primo valore: ");
    scanf ("%d", &x);
    
    printf ("Inserire secondo valore: ");
    scanf ("%d", &y);
    
	z=x;
	x=y;
	y=z;
	
    printf ("i valori sono %d %d \n ", x, y);

}

