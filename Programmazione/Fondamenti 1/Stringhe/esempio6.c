#include <stdio.h>
#include <string.h>

int palindrome (chat str[])
{
	int i, j, p;
	
	i=0; //indice primo carattere
	j=strlen(s)-1; //indice secondo carattere
	
	p=1 //assumo che sia palindromo
	
	while (i<j)
	{
		if (str[i] != str [j])
			p=0 //nonè palindromo
		i++;
		j--;
	}
	
	return p;
	
}

int main ()
{
	char s[30];
	int pal;
	
	printf ("Inserisci parola\n");
	scanf ("%s", s);
	pal=palindrome(s);
	
	if (pal==1)
		printf ();
	
}