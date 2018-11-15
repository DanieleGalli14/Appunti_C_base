#include <stdio.h>
#include <stdlib.h>

struct list 
{
	int d;
	struct list *next;
};

void create_max (list l1, list l2)//creao una lista con il massimo
{
    list p, last, l3=null;

    while (l1!=null && l2!=null)
    {
        p=newnode();
        if (l1->d>l2->d)
        	p->d=l1->d;
        else
        	p->d=l2->d;

        if (l3==null)
        {
        	l3=p;
        	last=p;
        }
        else 
        {
        	last->next=p;
        	last=p;
        }
        l1=l1->next;
        l2=l2->next;
    }

    while (l1!=null)
    {
        p=newnode();
        p->d=l1->d;
        p->next=null;
        if (l3==null)
        {
            l3=p;
            last=p;
        }
        else 
        {
            last->next=p;
            last=p;
        }
        l1=l1->next;
    }

    while (l2!=null)
    {
        p=newnode();
        p->d=l2->d;
        p->next=null;
        if (l3==null)
        {
            l3=p;
            last=p;
        }
        else
        {
            last->next=p;
            last=p;
        }
        return l3;
    }
}

int main ()
{

}