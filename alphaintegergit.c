#include <stdio.h>
#include <stdlib.h>
#define ZETAMAIUSCOLO 90
#define ZETAMINUSCOLO 122

typedef struct nodo{
	char data;
	struct nodo *next;
}Nodo;

Nodo *crea_maiuscolo(){
	
}

Nodo *crea_minuscolo(){
	
}

void stampa_su_file(Nodo *lM, Nodo *lm, FILE *fp){

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