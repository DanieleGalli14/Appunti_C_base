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
	while (l!=NULL)
	{
		printf ("%d\n", l->d);
		l=l->next;
	}
}


void main ()
{

}