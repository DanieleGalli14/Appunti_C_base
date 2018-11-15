#include <stdio.h>
#include <malloc.h>
#define TRUE 1
#define FALSE 0


typedef struct list { //definizione lista
	int data;
	struct list *next;
} list;

int countmaggiore (list l1, list l2) //conta quanti elemtni di l1 sono piùgrandi di l2 
{
	int c=0;

	while (l1!=null && l2!=null)
	{
		if (l1->d > l2->d)
			c++;
		l1=l1->next;
		l2=l2->next;
	}

	while (l1!= null && l2==null)
	{
		
	}
}