#include <stdio.h>

typedef int DATA;

struct linked_list 
{
	DATA d;
	
	struct linked_list *next;
	
}

typedef struct linked_list element;

typedef element *list;

void create_insert (int x, list *head, list *last) //inserisce un nodo in mezzo alla lista
{
	list p;
	p=newnode ();
	p->d=x;

	if (*head==null)
	{
		*head->d=p;
		last=p;
	}

	else
	{
		(*last)->next=p;
		*last=p;
	}
}

list concatena (list l1, list l2, int n, int m) //concatena più nodi
{
	list p, l3, last;
	int i;
	l3=null;
	last=null;
	i=0;

	while (i<h && l1!=null)
	{
		i++;
		create_insert(l1->d, &l3, &last);
		l1=l1->next;

		if (l1!=null)
			l2=l2->next;
	}

	while (i<n && l2!=null)
	{
		l2=l2->next;
		i++;
	}

	while (l2!=null && i=<null)
	{
		i++;
		create_insert(l2->d, &l3, &last)
		l2=l2->next;
	}
}


void main ()
{

}