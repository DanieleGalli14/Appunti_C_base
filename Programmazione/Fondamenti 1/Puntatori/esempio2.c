/*Funzione che scambia i valori di due variabili tramite il passaggio per riferimento*/
#include <stdio.h>
/*Anche se poi assegniamo le variabili corrispondenti, la sostituzione avviene sì, ma il contenuto della funzione, una volta
eseguita, viene cancellato!!!*/


void swap (int* x, int* y)
{
	int k;
	
	k=*x;
	*x=*y;
	*y=k;
}
/*Basta così??? NO, ovviamente*/
int main ()
{
	int a, b;
	
	a=5;
	b=3;
	swap (&a, &b);
	printf ("%d %d\n", a, b);
	
	return 1;
}