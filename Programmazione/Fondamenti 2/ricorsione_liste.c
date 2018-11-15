#include <stdio.h>

typedef int DATA;

struct linked_list 
{
	DATA d;
	
	struct linked_list *next;
	
}

voif print (list l1)
{
	if (l1!0=null)
	{
		printf("%d\n", l1->d);
		print (l1->next);
	}
}

int sum (list l1)
{
	if (l1==null)
	{
		return 0;
	}
	
	else
	{
		if (l1->d>0)
			return l1->d+sum(l1->next);
		else 
			return sum (l1->next);
	}
}

void sum3 (list l1, int *r, int pos)//somma gli elementi di pos pari della lista
{
	if (l1==null)
	{
		return 
	}

	else
	{
		if (pos%2==0)
		{
			*r=*r+l1->d;
			sum3 (l1->next, r, pos+1);
		}
		else 
		{
			sum3 (l1->next, r, pos+2);
		}
	}
}

int count_sum (list l1) //da in output un numero somma di altri 2
{
	if (l1==null)
		return 0;
	if (l1->next==null)
		return 0;

	if (l1->next->next==null)
		return 0;

	if (l1_<d+l1->next->d==l1->next->next->d)
	{
		return 1+count_sum(l1->next);
	}
		else
			return count_sum (l1->next;)
}

list find (list l1, int x)//
{
	if (l1==null)
		return null;
	if (l1->d==x)
		return l1;
	else 
		return find (l1->next, x);
}

void find2(list l1, int x, int pos, list *r)//cerco un elemento x che debba trovarsi dopo la posizione pos
{
	if (l1==null)
		return ;
	if (pos >=p)
	{
		if (l1->d==x)
			return l1;
	}
	return find2()
} 

void find3 (list l1, int x, int p)
{
	if (l1==null)
		return;
	if (l1->d==x)
		*l=*l+1;
	find3(l1->next,x, l);
} 