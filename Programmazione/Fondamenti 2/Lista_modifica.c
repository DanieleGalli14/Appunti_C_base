struct linked_list 
{
	DATA d;
	
	struct linked_list *next;
	
}

typedef struct linked_list element;

typedef element *list;

void change (list l1, int x, int y) //per valore perché non vado a modificare un puntatore
{
	while (l1!=null)
	{
		if (x==l1->d)
			l1->d=y;
		l1=l1->next;
	}
}

void inserthead (list *l1, int x) //se si modificano la testa/puntatore di una lista
{
	list new=newnode ();
	new-> d=x;
	new ->new=*l1;
	*l1=new;
}

void insert_tail (list *l1, int x) //inserisce un nuovo elemento alla fine della lista
{
	list new;
	new=newnode ();
	new->d=x;
	new->next=null;
	
	if (*l1==null)
	{
		*l1=new;
	}
	else
	{
		tmp=*l1;
		
		while (tmp->next==null)
		{
			tmp=tmp->next;
		}
		tmp->next=new;
	}
}

void del_head (list *l) //cancella la testa della lista
{
	list t;
	
	if ((*l)!=null)
	{
		t=*l;
		*l=(*l)->next;
		
		free (t);
	}
	
	/*ATTENZIONE!!!!! Se vogliamo che l'elemento successivo diventi la nuova testa, bisogna indicarlo ESPLICITAMENTE!!!*/
}

void del_tail (list*l) //fa altrettanto con la coda
{
	list t;
	
	if (*l1!=null)
		if ((*l1)->next!=null)
		{
			t=*l1;
			while (t->next->next!=null)
			{
				t=t->next;
			}
			free (t->next);
			t->next=null;
		}
		
		else
		{
			
		}
}