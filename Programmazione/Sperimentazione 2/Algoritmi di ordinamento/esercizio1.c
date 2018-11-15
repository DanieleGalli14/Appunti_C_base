/*Copiare, compilare e fare girare gli algoritmi di selection sort e bubble sort.*/
#include <stdio.h>
#define TRUE 1
#define FALSE 0

void SELECTION(int a[], int n){
	int i, j, jmin, tmp;
	for (i=1; i<n; i++){
		jmin=i+1;
	
	for (j=i; j<n; j++)
		if (a[j]<a[jmin])
			jmin=j;
		tmp=a[jmin];
		a[jmin]=a[i-1];
		a[i-1]= tmp;
	}
}

void BUBBLE(int a[], int n){
	int i, j,tmp, changed;
	changed=TRUE;
	i= n-1;
	while (i>0 && changed==TRUE){
		changed=FALSE;
		for (j=0; j<i; j++)
			if (a[j]>a[j+1]){
				changed=TRUE;
				tmp=a;
				a[j]=a[j+1];
				a[j+1]= tmp;
			}
		i--;
	}
}

int main (void)
{
	int n=5;
	int a[5]={5, 12, 16, 3, 9};
	int i;
	
	for (i=0; i<n; i++){
		printf ("%d   ", a[i]);
	}
	
	printf ("\n");
	
	SELECTION (a, 5);
	for (i=0; i<n; i++){
		printf ("%d   ", a[i]);
	}
	printf ("\n");
	
	BUBBLE(a, 5);
	for (i=0; i<n; i++){
		printf ("%d   ", a[i]);
	}
	printf ("\n\n");
}