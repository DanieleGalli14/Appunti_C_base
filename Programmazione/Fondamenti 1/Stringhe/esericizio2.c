/*Scrivere un programma che legga una frase introdotta da tastiera. La frase è terminata dall'introduzione è terminata dall'introduzione del carattere d'invio.
La frase contiene solo caratteri minuscoli e complessivamente al più 100 caratteri. Il programma dovrà stampare su schermo le seguenti info:
-per ognuna delle lettere dell'alfabeto, il numero di volte che la lettera copare nella stringa
-il numero di consonanti presenti nella stringa- il numero di vocali presenti nella stringa
(Tradotto: scrivi una frase, indica quante volte appare una lettere, quante consonanti e quante vocali ci sono!*/
#include <stdio.h>
#include <string.h>

int consonanti (char str[])
{
	int i, j;
	
	j=0; 
	
	for (i=0; i<100; i++)
	{
		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
			j=j+1;
	}
	
	return j;
}

int vocale (char str[])
{
	int i, j;
	
	j=0; 
	
	for (i=0; i<100; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			j=j+1;
	}
	
	return j;
}


int main ()
{
	char s[100], l;
	int c, n;
	
	printf ("Scrivi la frase\n");
	scanf ("%s", s);
	
	printf ("Inserisci lettera da cercare:\n");
	scanf ("\n%c", &l);
	
	
	c=consonanti(s);
	if (l!=0)
		printf ("La frase contiene %d consonanti", c);
	else
			printf ("La frase NON contiene alcuna consonante");
	
	
	n=vocale(s);
	if (n!=0)
		printf ("La frase contiene %d vocali\n", n);
	else
		printf ("La frase non contiene alcuna vocale\n");
	
	return 1;
}