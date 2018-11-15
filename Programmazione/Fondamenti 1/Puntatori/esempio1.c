/*funzione che riceve x e lo incrementa di 1*/
#include <stdio.h>
/*Se si assegna il valore ad a, e poi si invoca la funzione "incrementa", non si verifica l'incremento,
perché si cancella ciò che ha eseguito la funzione "incrementa"
Per risolvere ciò è necessario usare un puntatore*/

void incrementa (int* x)
{
	(*x)++;
}

/*Se non si avesse messo l'asterisco, quindi di fatto non si avesse usato un puntatore, la funzione come detto prima non esegue come vogliamo*/

int main()
{
	int a;
	
	a=5;
	incrementa(&a);
	printf ("Valore %d\n", a); 
	
	return 1;
}