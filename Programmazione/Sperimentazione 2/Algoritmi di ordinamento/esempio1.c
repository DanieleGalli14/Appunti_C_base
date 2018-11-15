#include <stdio.h>

int main (void)
{
	int n=5;
	int a[5]={5, 12, 16, 3, 9};
	int i;
	
	for (i=0; i<n; i++){
		printf ("%d   ", a[i]);
	}
	
	int j, jmin, tmp;
	
	for (i=1; i<n; i++){
		    jmin=i+1;
		
		for (j=1; j<n; j++)
			if (a[j]<a[jmin])
				jmin=j;
			tmp=a;
			a[jmin]=a[i-1];
			a[i-1]=tmp;
	}
	
	for (i=0; i<n; i++){
		printf ("%d   ", a[i]);
	}
	
}

