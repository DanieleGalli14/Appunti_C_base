#include <stdio.h>

int conta_caratteri (char s[])
{
	int i;
	
	//calcola lunghezza parola
	i=0;
	while (s[i]!= "\0")
		i++;
	printf ("Numero di caratteri: %d\n", i);
	
	return i;
}

int confronta_car (char str1[], char str2[])
{
	int p;
	int i;
	
	p=1; //assumo stessi caratteri
	
	i=0;
	while (str1[i] != "\0")
	{	
	if (str1[i] != str2 [i])
			p=0;
		i++;
	}
	
	return p;
}

int main ()
{
	char s1[30], s2 [30];
	int l1, l2, u;
	
	printf ("Scrivi prima parola:\n");
	scanf ("%s", s1);
	printf ("Scrivi seconda parola:\n");
	scanf ("%s", s1);
	
	l1=conta_caratteri (s1);
	l2=conta_caratteri (s2);
	 if (l1==l2)
	 {
		 u=confronta_car (s1, s2);
			if (u==1)
				printf ("Le parole sono uguali\n");
			else printf ("Le parole NON sono uguali\n");
	 }
		else
			printf ("Le parole NON sono uguali\n");
		
	return 1;
}