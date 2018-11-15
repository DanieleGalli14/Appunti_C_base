/*Scrivere un programma che attraverso una funzione "ordina", presi tre numeri interi a, b, c,
inserisca in a il valore minimo, in b il valore di mezzo e in c il valore massimo.
ESEMPIO
prima di richiamare la funzione: a=4, b=1 e c=2
dopo aver richiamato la fnzione "ordina" di avrà a=1, b=2 e c=4*/
#include <stdio.h>

void swap (int* x, int* y)
{
	int k;
	
	k=*x;
	*x=*y;
	*y=k;
}

int ordina (int* p1, int* p2, int* p3)
{
	if (*p1>*p2)
		swap (p1, p2);
	if (*p1>*p3)
		swap (p1, p3);
	if (*p2>*p3)
		swap (p2, p3);
}

int main ()
{
	int a, b, c;
	
	printf ("Inserisci i tre valori:\n");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	
	ordina (&a, &b, &c);
	printf ("\n");
	printf ("%d\n%d\n%d", a, b, c);
	
	return 1;
}
