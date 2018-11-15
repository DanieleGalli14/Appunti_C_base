#include <stdio.h>
#include <string.h>

int palindromo (char str [])
{
	int i, j, p;
	
	i=0;
	j=strlen(str)-1;
	
	p=1;
	
	while (i<j)
	{
		if (str[i]!=str[j])
			p=0; //non è palindromo
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
	pal=palindromo(s);
	
	if (pal==1)
		printf ("La parola e' un palindromo\n");
	else 
		printf ("La parola NON e' un palindromo\n");
	
	return 1;
}