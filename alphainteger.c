#include <stdio.h>
#include <stdlib.h>
#define ZETAMAIUSCOLO 90
#define ZETAMINUSCOLO 122

typedef struct nodo{
	char data;
	struct nodo *next;
}Nodo;

Nodo *crea_maiuscolo(){
	Nodo *Testa = NULL;
	Nodo *Coda = NULL;
	char c;

	Testa = (Nodo *)malloc(sizeof(Nodo));
	Testa -> data = 65;
	Coda = Testa;

	for(c = 66; c <= ZETAMAIUSCOLO; c++){
		Coda -> next = (Nodo *)malloc(sizeof(Nodo));
		Coda = Coda -> next;
		Coda -> data = c;
	}

	Coda -> next = NULL;

	return Testa;
}

Nodo *crea_minuscolo(){
	Nodo *Testa = NULL;
	Nodo *Coda = NULL;
	char c;

	Testa = (Nodo *)malloc(sizeof(Nodo));
	Testa -> data = 97;
	Coda = Testa;

	for(c = 98; c <= ZETAMINUSCOLO; c++){
		Coda -> next = (Nodo *)malloc(sizeof(Nodo));
		Coda = Coda -> next;
		Coda -> data = c;
	}

	Coda -> next = NULL;

	return Testa;
}

void stampa_su_file(Nodo *lM, Nodo *lm, FILE *fp){

	fprintf(fp,"\t\t    MAIUSCOLE\t\t\t\t\t    MINUSCOLE\n\n");

	while((lM != NULL) && (lm != NULL)){
		fprintf(fp, "\t\t\t%c\t\t\t\t\t\t%c\n", lM->data, lm->data);
		lM = lM->next;
		lm = lm->next;
	}
}

int main(int argc, char *argv[]){
	
	if(argc != 2){
		printf("ERRORE Numero di argomenti errato\n");
		return 0;
	}

	printf("Questo programma stampa da lista in un file tutte le 26 lettere dell'alfabeto inglese, sia maiuscolo che minuscolo\n[Il nome del file e' passato per argomento]\n");
	system("PAUSE");

	Nodo *lM, *lm;

	lM = crea_maiuscolo();
	lm = crea_minuscolo();

	FILE *fp = fopen(argv[1], "w");

	if(fp == NULL){
		printf ("ERRORE Nell'apertura del file\n");
		return 0;
	}
	else{
		stampa_su_file(lM, lm, fp);
		fclose(fp);
	}

}