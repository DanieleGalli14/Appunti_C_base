#include <stdio.h>

float max (float a, float b)
{
	float m;
	
	if (a>b)
		m=a;
	else m=b;

	return m;
}

int main ()
{
	float x, y, massimo;
	
	printf ("Inserire primo valore:\n");
	scanf ("%f", &x);
	printf ("Inserire secondo valore:\n");
	scanf ("%f", &y);
	
	massimo=max(x,y);
	printf ("Il massimo vale %f\n", massimo);

	return 1;
}