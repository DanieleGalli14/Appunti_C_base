#include <stdio.h>

int equal (list l1, list l2) //due liste in input passate per valore, verifica se le parti dati siano uguali
{
	if (l1==NULL)&&(l2==NULL)
		return 1;

	else
		if (l1!=NULL) && (l2==NULL)
			return 0;

		else 
			if (l1==NULL) && (l2!=NULL)
				return 0;

			else
				if (l1->d== l2->d)
					return equal (l1->next, l2->next);
				else 
					return 0;
}

int countmag  (list l1, list l2) //conta gli elementi maggio ri l1, e quando una delle due finisce considera nel confronto zero
{
	if (l1==NULL) && (l2==NULL)
		return 0;

	else
		if (l1!=NULL) && (l2==NULL)
			{
				if (l1->d>0)
				return 1+countmag (l1->next, l2)

				else 
					return countmag (l1->next, l2)
			}
		else
			if (l1==NULL) && (l2!=NULL)
				if (0>l2->d)
					return 1+countmag (l1 l2->next);
				else
					return countmag (l1, l2->next);

			e
}

list dupsum (list l1, list l2)//funzione che ha preso in input due liste, consegni una lista che contenga la somma degli elementi delle due liste, fino alla fine di una delle 2
{
	if (l1==NULL) && (l2==NULL)
		return NULL;
	else
		if (l1==NULL) && (l2!=NULL)
			return NULL;

		else
			if (l1!=NULL) && (L2!=NULL)
				return NULL;

			else 
			{
				newnode();
				p->d=l1->d+l1->d;
				p->next=dupsum(l1->next, l2->next);
				return p;
			}

		}

list dupsum2 (list l1, list l2, list *out)
{
	if (l1==NULL) && (l2==NULL)
	{
		*out=NULL;
	}
	else
		if (L1==NULL) && (l2!=NULL)
		{
			*out=newnode;
			(*out) ->l2->d;
			dupsum2 (l1, l2 ->next, (&out)->next);
		}

		else 
			if (l1!=NULL) && (l2==NULL)
			{
				*out=newnode;
				(*out) ->l2->d;
				dupsum2 (l1->next, l2, (&out)->next);
			}

			else
			{
				(*out)= newnode();
				(*out)->d=l1->d;
				dupsum2 (l1->next, l2->next, &(*out)->next);
			}
}