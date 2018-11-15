#include <stdio.h>

void copia_stringa (char str1[], char str2[])
{
	int i;
	
	i=0;
	while (str1[i]!= "\0")
	{
		str2[i]=str1[i];
	i++;
	}
	
	str1[i]="\0";
}

int main ()
{
	char s1[30], s2 [30];
	
	printf ("Scrivi parola:\n");
	scanf ("%s", s1);
	
	copia_stringa(s1, s2);
	printf("La copia e' %s", s2);
	
	return 1;
}