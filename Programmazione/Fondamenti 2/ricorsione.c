#include <stdio.h>

void stampa (int A[], int n, int pos) //ricorsione
{
	if (pos<n)
	{
		printf ("%d\n", A[pos])
		stampa (A, n, pos +1)
	}
	return;
}

int max (int a[], int n, int pos)
{
	if (pos==n-1)
		return a[pos];
	else
	{
		int m=max (a, m, pos)
		if (a[pos]>m)
			return a[pos];
		else
			return m;
	}
}

int fib (int n)
{
	if (n==0)
		return 1;
	if (n==1)
		return 1;

	return fib (n-1)+fib (n-2);
}

int find (int a[], int dim, int x, int pos)
{
	if (pos==(dim-1))
		if (a[pos]==x)
			return pos;
		else
			return -1;

	if (a[pos]==x)
		return pos;
	else
		return find (a, dim, x, pos+1);
}

int pal (int a[], int dim, int pos)
{
	if(a[pos]!=a[dim-pos-1])
		return 1;
	else
		return pal (a, dim, pos+1)
}