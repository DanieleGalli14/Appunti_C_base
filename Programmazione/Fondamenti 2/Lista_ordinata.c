#include <stdio.h>

typedef int DATA;

struct linked_list 
{
	DATA d;
	
	struct linked_list *next;
	
}

typedef struct linked_list element;

typedef element *list;

void stampa (list l)
{
	while (l!=null)
	{
		printf ("%d\n", l->d);
		l=l->next;
	}
}

int ordine (list l)
{
	int r=0;
	if (l==null)
		return r;
	
		if (l->next == null)
			return r;
		
	while (l->next !=null && r=0)
	{
		if !(l->d =< l-> next ->d)
			r=1;
		l=l->next;
	}
	return r;
}


void main ()
{

}