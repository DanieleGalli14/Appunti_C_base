#include <stdio.h>
#include <string.h>

void main ()
{
	int v=5;
	int *pi;
	pi=&v;
	
	printf ("Indirizzo di v= %p\n", &v);
	
	printf ("Valore di pi=%p\n", pi);
	
	printf ("Valore di &*pi=%p\n", &*pi);
	
	printf ("valore di v=%d\n", v);
	
	printf ("valore di *pi=%d\n", *pi);
	
	printf ("valore di *&v=%d\n", *&v);
}