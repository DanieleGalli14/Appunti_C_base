#include <stdio.h>
#include <stdlib.h>

struct list 
{
	int d;
	struct list *next;
};

int main ()
{
	struct  list *root; //primo nodo della lista
	struct list *conductor; /*Questo punterà ad ogni nodo quando attraversa
	la lista*/

	root= malloc (sizeof (struct list)) 
	/*ora la struttura list punta ad un nodo */

	/*Il nodo a cui list punta ha il puntatore successivo su un nodo nullo*/
	root->next=0;

	/*Grazie all'operatore ->, si può modificare a cosa punta la lista*/
	root->x=5;

	conductor=root;

	if (conductor!=0)
		while (condctor ->next !=0)
		{
		 conductor=conductor->next;
		}

    /*creare un nuovo nodo a fine lista*/
        conductor->next = malloc (sizeof (struct list));
        conductor=conductor->next;

        if (conductor==0)
        {
            printf ("Memoria esaurita\n");
            return 0;
        }

        /*inizializzare la nuova memoria*/
        conductor->next=0;
        conductor->x=42;

        return 0;

}