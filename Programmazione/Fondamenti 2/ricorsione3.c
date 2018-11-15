#include <stdio.h>

list buildlist ()
{
	list p;
	int x;

	printf ("Vuoi continuare? 0-no 1 sì\n");
	scanf ("%d", &x);

	if (x==0)
		return NULL;
	else
	{
		printf("Inserire nuovo valore\n");
		scanf ("%d", &x);
		p=newnode();
		p->d=x;
		p->next=buildlist();
		return p;
	}
}

void insertail (int x, list *l1, list *tail) //inserisce in coda
{
	if ((*tail)==NULL)
	{
		(*tail)==newnode();
		(*tail)->d=x;
		(*tail)->next=NULL;
	}

	else 
	{
		insertail (x, l1, &(*tail)->next);
	}
}

void insertfirst (int x, int y, list l1)//
{
	if (l1!=NULL)
	{
		if (l1->d==y)
		{
			list p;
			p=newnode();
			p->d=x;
			p->next=p;
			return;
		}

		else
			insertfirst(x, y, l1->next);
	}
}

void delete ()
{
	if ((*l1)!=NULL)
	{
		list p;
		free (*l1);
		delete (l1);
	}
}