// esempio_19.c
// PUNTATORI

#include <stdio.h>

void main()
{
	int a;
	float b;
	
	// puntatore 
	// pi è un puntatore a celle di memoria contenti interi (int)
	// pi è un puntatore a variabili intere
	int *pi;
	
	// associa al puntatore pi la variabile a
	pi = &a;
	
	printf("Inserisci a: ");
	scanf("%d", &a);
	
	printf("Inserisci b: ");
	scanf("%f", &b);
	
	printf("a vale %d \n", a);
	
	printf("a nella RAM %d e occupa %d\n", &a, sizeof(a));
	
	printf("b vale %f \n", b);
	
	printf("b nella RAM %d e occupa %d \n", &b, sizeof(b));
	
	printf("pi vale %d \n", pi);
	
	printf("pi nella RAM %d e occupa %d \n", &pi, sizeof(pi));
	
	// aumenta il valore puntatore
	// pi aumenta il valore di a
	*pi = *pi + 1;
	
	printf("a vale %d \n", a);
	
}