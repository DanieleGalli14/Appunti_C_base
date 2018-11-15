#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "liste.h"

Node *crea_da_file(FILE *fp){
    
    Node *startL = NULL;
    Node *nextL = NULL;
    
    char nome[DIM];
    int voto;
    int cfu;
    
    startL = (Node *)malloc(sizeof(Node));
    
    if(startL == NULL){
        printf("Errore nell'allocazione di memoria\n");
        return NULL;
    }
    else{
        fscanf(fp, "%s %d %d", nome, &voto, &cfu);
        
        strcpy(startL -> nome, nome);
        startL -> voto = voto;
        startL -> cfu = cfu;
        nextL = startL;
        
        while(fscanf(fp, "%s %d %d", nome, &voto, &cfu) != EOF){
            nextL -> next = (Node *)malloc(sizeof(Node));
            nextL = nextL -> next;
            strcpy(nextL -> nome, nome);
            nextL -> voto = voto;
            nextL -> cfu = cfu;
        }
        
        nextL -> next = NULL;
        
        return startL;
        
    }
}

void stampa (Node *list){
	if (list == NULL){
		return;
	}

	printf ("La matricola %s ha conseguito un voto di %d/30, in un corso da %d crediti\n", list->nome, list->voto, list->cfu);
	stampa(list->next);

}

void media_matricola(Node *list, char ricerca[]){
	
	if (list == NULL){
		printf("Matricola non trovata\n\n");
		return;
	}

	int trovato = 0;
    int somma_voti = 0;
    int somma_pesi = 0;

	Node *tmp = list;

	while(tmp != NULL){
		if(strcmp(tmp -> nome, ricerca) == 0){
			somma_voti = somma_voti + (tmp->voto * tmp-> cfu);
            somma_pesi = somma_pesi + tmp->cfu;
            trovato = 1;
		}
		
		tmp = tmp -> next;
	}

	if (trovato == 0)
		printf("Matricola non trovata\n\n");

	else{
        float media;
        media = (float) somma_voti / (float) somma_pesi;
        printf("La media pesata della matricola %s e' di %.2f\n\n", ricerca, media);
    }
    return;
}

int esiste(Node *list, char ricerca[]){
    Node *tmp = list;
    int trovato = 0;

    while (tmp != NULL && trovato == 0){
        if(strcmp(tmp -> nome, ricerca) == 0)
            trovato = 1;
        tmp = tmp -> next;
    }

    return trovato;
}

Node *crea_matricola(Node *list, char ricerca[]){
    Node *tmp=list;
    Node *startL = NULL;
    Node *nextL = NULL;

    int i=0;

    while(tmp != NULL){
        if(strcmp(tmp -> nome, ricerca) == 0){
            i++;
            if(i==1){
                startL = (Node *)malloc(sizeof(Node));
                strcpy(startL -> nome, tmp->nome);
                startL -> voto = tmp->voto;
                startL -> cfu = tmp->cfu;
                nextL = startL;
            }
            else{
                nextL -> next = (Node *)malloc(sizeof(Node));
                nextL = nextL -> next;
                strcpy(nextL -> nome, tmp->nome);
                nextL -> voto = tmp->voto;
                nextL -> cfu = tmp->cfu;
            }
        }
        tmp= tmp -> next;
    }
    nextL -> next = NULL;

    return startL;
}

void scambia_int(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}

void ordina(Node *list)
{
    Node *q;

    while (list != NULL)
    {
        q = list->next;
        while (q != NULL)
        {
            if (list->cfu > q->cfu){
	            scambia_int(&list->voto, &q->voto);
	            scambia_int(&list->cfu, &q->cfu);
        	}
	        q = q->next;
        }
        list = list->next;
    }
    return;
}

void crea_file_matricola(Node *list, FILE *fp){
	Node *tmp = list;
	int i = 1;

	fprintf(fp, "Elenco degli esami superati dalla matricola %s, con indicazione di voto e crediti:\n", tmp->nome);

	while (tmp != NULL){
		fprintf(fp, "%d) Esame di valenza %d crediti superato con il voto di %d/30\n", i, tmp->cfu, tmp->voto);
		i++;
		tmp = tmp -> next;
	}

	return;
}