#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "liste.h"

Node *crea_da_file(FILE *fp){
    
    Node *startL = NULL;
    Node *nextL = NULL;
    
    char nome[DIM];
    float temperatura;
    int prom;
    
    startL = (Node *)malloc(sizeof(Node));
    
    if(startL == NULL){
        printf("Errore nell'allocazione di memoria\n");
        return NULL;
    }
    else{
        fscanf(fp, "%s %f %d", nome, &temperatura, &prom);
        
        strcpy(startL -> nome, nome);
        startL -> temperatura = temperatura;
        startL -> prom = prom;
        nextL = startL;
        
        while(fscanf(fp, "%s %f %d", nome, &temperatura, &prom) != EOF){
            nextL -> next = (Node *)malloc(sizeof(Node));
            nextL = nextL -> next;
            strcpy(nextL -> nome, nome);
            nextL -> temperatura = temperatura;
            nextL -> prom = prom;
        }
        
        nextL -> next = NULL;
        
        return startL;
        
    }
}

Node *lista_fredda(Node *l1){
    Node *startL = NULL;
    Node *nextL = NULL;
    
    Node *tmp = l1;
    int i = 0;
    
    while(tmp != NULL){
        if(tmp-> temperatura <= 20){
            i++;
            if (i == 1) {
            	startL = (Node *)malloc(sizeof(Node));
            	strcpy(startL -> nome, tmp -> nome);
		        startL -> temperatura = tmp -> temperatura;
		        startL -> prom = tmp-> prom;
		        nextL = startL;
            }
            else{
            	nextL -> next = (Node *)malloc(sizeof(Node));
	            nextL = nextL -> next;
	            strcpy(nextL -> nome, tmp-> nome);
	            nextL -> temperatura = tmp->temperatura;
	            nextL -> prom = tmp -> prom;
            }            
        }
        
        tmp = tmp ->next;
    }

    nextL->next = NULL;

    return startL;
}

void stampa (Node *list){
	if (list == NULL){
		return;
	}

	printf ("Localita' %s, temperatura %.2f gradi celsius, il pacchetto viaggio proposto ", list->nome, list->temperatura, list->prom);
	if(list->prom == 1){
		printf("e' in promozione.\n");
	}
	else{
		printf("non e' in promozione.\n");
	}
	
	stampa(list->next);

}

void ricerca_citta(Node *list, char ricerca[]){
	
	if (list == NULL){
		printf("Localita' non trovata\n\n");
		return;
	}

	int trovato = 0;

	Node *tmp = list;

	while(tmp != NULL && trovato == 0){
		if(strcmp(tmp -> nome, ricerca) == 0){
			printf ("Localita' %s, temperatura %.2f gradi celsius, il pacchetto viaggio proposto ", tmp->nome, tmp->temperatura, tmp->prom);
			if(tmp->prom == 1){
				printf("e' in promozione.\n\n");
			}
			else{
				printf("non e' in promozione.\n\n");
			}
			trovato = 1;
		}
		
		tmp = tmp -> next;
	}

	if (trovato == 0)
		printf("Localita' non trovata\n\n");

	return;
}

void scambia_int(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}

void scambia_float(float *a, float *b)
{
    float c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}

void scambia_string(char a[], char b[])
{
    char c[DIM];
    strcpy(c, a);
    strcpy(a, b);
    strcpy(b, c);
    return;
}

void ordina_per_temperatura(Node *list)
{
    Node *q;

    while (list != NULL)
    {
        q = list->next;
        while (q != NULL)
        {
            if (list->temperatura > q->temperatura){
            	scambia_string(list->nome, q->nome);
	            scambia_float(&list->temperatura, &q->temperatura);
	            scambia_int(&list->prom, &q->prom);
        	}
	        q = q->next;
        }
        list = list->next;
    }
    return;
}

void crea_file_ordinato(Node *list, FILE *fp){
	Node *tmp = list;
	int i = 1;

	fprintf(fp, "Catalogo dei viaggi:\n");

	while (tmp != NULL){
		fprintf(fp, "%d) Localita' %s, temperatura media stimata %.2f gradi Celsius, il pacchetto viaggio proposto ", i, tmp->nome, tmp->temperatura);
		if(tmp->prom == 1){
			fprintf(fp, "e' in promozione.\n");
		}
		else{
			fprintf(fp, "non e' in promozione.\n");
		}
		i++;
		tmp = tmp -> next;
	}

	return;
}