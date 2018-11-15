#include <stdio.h>
#include <string.h>
int main ()
{
	char s1[30], s2[30], s3 [30];
	int l;
	
	printf ("Inserisci parola\n");
	scanf ("%s", s1);
	
	l=strlen(s1); //lunghezza
	printf ("Inserisci un'altra parola\n");
	scanf ("%s", s2) ;
	
	if (strcmp (s1, s2)==0)
		printf ("Le parole sono uguali\n");
	else
		printf ("Le parole sono diverse tra loro\n");
	
	strcpy(s3, s1); //copia s1 in s3
	
}