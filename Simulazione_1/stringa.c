#include <stdio.h>
#include <string.h>


void scambia_str(char a[], char b[])
{
    char c[10];    
    strcpy(c,a); // copia la stringa a in c
    strcpy(a,b); // copia la stringa b in a
    strcpy(b,c); // copia la stringa c in b
    return;
}


void main(){
	char s1[] = "Upo";
	char s2[] = "Ciao";

	printf("%s, %s!\n", s1, s2);
	scambia_str(s1, s2);
	printf("%s, %s!\n", s1, s2);	
}