#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100

struct node
{
    int matricola;
    char nome[DIM];
    char cognome[DIM];
    int voto;
    int peso;
    struct node *next;
};
typedef struct node Node;
typedef Node* List;

/***prototipazione***/

Node * lista_crea_da_file();
void lista_stampa(Node * list);
void media_matricola(int matric, List l);
void stampa_voti_matricola(int matric, List l);
void numero_lodi_matricola(int matric, List l);

int main()
{
    Node *list;
    list = lista_crea_da_file();
    lista_stampa(list);

    int matricola = 0,x = -1, c = 0;

    while(c == 0)
    {
        printf("inserire matricola di cui si vuole conoscere la media: ");
        scanf("%d",&x);
        printf("\n");
        if(x < 20000000 || x > 30000000)
            printf("errore, il formato matricola è 200XXNNN\n\n");
        else
        {
            matricola = x;
            c = 1;
        }
    }
    if(c == 1)
    {
        media_matricola(matricola,list);
        c = 0;
    }

    while(c == 0)
    {
        printf("inserire matricola di cui si vuole conoscere i voti: ");
        scanf("%d",&x);
        printf("\n");
        if(x < 20000000 || x > 30000000)
            printf("errore, il formato matricola è 200XXNNN\n\n");
        else
        {
            matricola = x;
            c = 1;
        }
    }
    if(c == 1)
    {
        stampa_voti_matricola(matricola,list);
        c = 0;
    }

    while(c == 0)
    {
        printf("inserire matricola di cui si vuole conoscere i voti: ");
        scanf("%d",&x);
        printf("\n");
        if(x < 20000000 || x > 30000000)
            printf("errore, il formato matricola è 200XXNNN\n\n");
        else
        {
            matricola = x;
            c = 1;
        }
    }
    if(c == 1)
    {
        numero_lodi_matricola(matricola,list);
        c = 0;
    }

    printf("*** ELABORAZIONE CONLCUSA *** \n");
    return 0;
}


/**
* @FUNZIONE lista_stampa
* @PARAM: puntatore alla stringa
* @RETURN: -
*/
void lista_stampa(Node * startL)
{
    if (startL == NULL)
    {
        printf("La lista terminata\n\n");
        return;
    }
    else
    { 
        printf("*** %d ***\n",startL->matricola);
        printf("Cognome: %s\n", startL->cognome);
        printf("Nome: %s\n", startL->nome);
        printf("Voto: %d\n", startL->voto);
        printf("Peso: %d\n", startL->peso);
        printf("****************\n\n");

        lista_stampa(startL->next);
    }
}

/**
* @FUNZIONE lista_crea_da_file
* @PARAM: -
* @RETURN: il puntatore alla testa della lista
*/
Node * lista_crea_da_file()
{
    int i=0; // contatore elementi creati

    int matricola;
    char nome[DIM];
    char cognome[DIM];
    int voto;
    int peso;

    FILE *fp = fopen("dati-es6.txt", "r");

    Node *startL; /* puntatore al primo elemento (testa) della lista */
    Node *nextL; /* puntatore agli elementi successivi della lista */

    startL = NULL; /* inizialmente il puntatore al primo elemento e' nullo (non ci sono elementi) */
    nextL = NULL; /* inizialmente il puntatore agli elementi successivi e' nullo (non ci sono elementi) */

    if (fp == NULL)
    {
        printf("Errore nell’apertura del file dati_in.txt");
        return startL;
    }
    else
    {
        while (fscanf(fp, "%d %s %s %d %d", &matricola,cognome,nome,&voto,&peso) != EOF)
        {
            i++;
            if (i==1)
            {
                 /* creazione del primo elemento */
                startL = (Node *)malloc(sizeof(Node));
                startL->matricola=matricola;
                startL->peso=peso;
                startL->voto=voto;
                strcpy(startL->nome,nome); // copia il nome nella variabile locale nella lista
                strcpy(startL->cognome,cognome);
                nextL = startL;
            }
            if (i>1)
            {
                /* crea un nuovo nodo e lo fa puntare dal campo next del nodo corrente */
                nextL->next = (Node *)malloc(sizeof(Node));
                nextL = nextL->next;
                nextL->matricola=matricola;
                nextL->peso=peso;
                nextL->voto=voto;
                strcpy(nextL->nome,nome);
                strcpy(nextL->cognome,cognome);
            }
        }
        nextL->next = NULL; /* concluso il ciclo il campo next dell'ultimo nodo e' settato a NULL */
    }

    return startL; /* restituisce il puntatore alla testa della lista */
}

/**
* @FUNZIONE media_matricola
* @PARAM: matricola e lista da cui calcolare la media
* @RETURN: -
*/
void media_matricola(int matric, List l)
{
	int b = 0;
    float mediapesata = 0;
    int  pesotot = 0;
    while(l != NULL)
    {
        if(l->matricola == matric)
        {
        	b = 1;
            pesotot += l->peso;
            mediapesata += ((float)(l->voto * l->peso));
        }   
        l = l->next;
    }
    if(b == 1)
    {
	    mediapesata /= (float)pesotot;
	    printf("la media pesata della matricola %d è: %f\n\n",matric,mediapesata );
	}
	else
		printf("errore, la matricola inserita non è presente in memoria\n\n");
	printf("\n");
}

/**
* @FUNZIONE stampa_voti_matricola
* @PARAM: matrico e lista da cui prelevare i voti
* @RETURN: -
*/
void stampa_voti_matricola(int matric, List l)
{
	int b = 0;
	while(l != NULL)
	{
		if(matric == l->matricola)
		{
			printf("voto: %d | peso: %d\n",l->voto,l->peso );
			b = 1;
		}
		l = l->next;
	}
	if(b == 0)
		printf("la matricola inserita non è presenta in memoria\n\n");
	printf("\n");
}

/**
* @FUNZIONE numero_lodi_matricola
* @PARAM: matrico e lista da cui prelevare le lodi
* @RETURN: -
*/
void numero_lodi_matricola(int matric, List l)
{
	int b = 0,counter = 0;
	while(l != NULL)
	{
		if(matric == l->matricola)
		{
			if(l->voto == 31)
				counter++;
			b = 1;
		}
		l = l->next;
	}
	if(b == 0)
		printf("la matricola inserita non è presenta in memoria\n\n");
	else
		printf("il numero di lodi della matricola %d è %d\n\n",matric,counter );
	printf("\n");
}