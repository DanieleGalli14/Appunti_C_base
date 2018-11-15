#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int data;
	struct nodo *next;
}Nodo;

Nodo *crea(int n){
	Nodo *Testa = NULL;
	Nodo *Coda = NULL;
	int i;

	Testa = (Nodo *)malloc(sizeof(Nodo));
	Testa -> data = 1;
	Coda = Testa;

	for(i = 2; i <= n; i++){
		Coda -> next = (Nodo *)malloc(sizeof(Nodo));
		Coda = Coda -> next;
		Coda -> data = i;
	}

	Coda -> next = Testa;

	return Testa;
}

void stampa(Nodo *list, int n, int c){
	
	Nodo *tmp = list;
	Nodo *l = tmp;

	int i = 1;
	int j = l->data;


	while(i <= c){
		
		do{
			printf(" --> %d", l->data);
			l = l->next;
		}while(l->data != j);
		
		printf("\n\n");
		i++;
	}

}

int main(int argc, char *argv[]){

	if(argc < 3){
		printf("ERRORE Argomenti insufficienti\nIl formato corretto degli argomenti e' <nome eseguibile> <intero> <numero di cicli>\n");
		return 0;
	}
	else
		if(argc > 3){
			printf("ERRORE Argomenti eccessivi\nPer garantire il minor spreco possibile di spazio, il formato corretto degli argomenti e' <nome eseguibile> <intero> <numero di cicli>\n");
			return 0;
		}
	int n = atoi(argv[1]);
	int c = atoi(argv[2]);
	printf ("Questo programma crea una lista circolare di %d elementi.\nEssa poi verra' stampa %d volte\n!!WARNING!!\nIl programma funziona se solo se il valore dell'origine della lista circolare e' diverso dagli altri nodi!!!\n", n, c);
	system("PAUSE");

	Nodo *l;

	l=crea(n);

	stampa(l, n, c);

	system("PAUSE");


}
