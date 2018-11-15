#include <stdio.h>
#include <stdlib.h>

struct list 
{
	int d;
	struct list *next;
};

void create_sum (list l1, list l2, list l3)//il terzo elemento è la somma dei primi due
{
    list p, last;

    while (l1!=null && l2!=null)
    {
        p=newnode();
        p->l1->d+l2->d;
        p->next=null;

        if (*l3==null)
        	{
        		(*l3)=p;
        		last=p;
        	}
        else 
        {
        	last->next=p;
        	last=p;
        }
    }

}

int main ()
{

}