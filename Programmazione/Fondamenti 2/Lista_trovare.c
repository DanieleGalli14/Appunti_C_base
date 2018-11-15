#include <stdio.h>

typedef int DATA;

struct linked_list 
{
	DATA d;
	
	struct linked_list *next;
	
}

typedef struct linked_list element;

typedef element *list;

list find (list l1, int x, int n)
{
	int c=0;

	while ((l!=null) && (c<n))
	{
		if (l1->d==x)
		{
			c+;
		}

		if (c==n)
		{
			l1=l1->next;
		}
		 return l1;
	}
}



void main ()
{

}