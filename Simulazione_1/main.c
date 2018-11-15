#include <stdio.h>
#include "liste.h"

void main(int argc, char *argv[]){
    
    if(argc != 3){
        printf("Formato dei comandi invalido\nIl formato da inserire e' <nome eseguibile> <viaggi.txt> <viaggi_ordinati.txt>\n\n");
        return;
    }
    
    Node *l1, *l2;
    char ricerca[DIM];
    
    FILE *fp =  fopen(argv[1], "r");
    
    if(fp == NULL){
        printf ("Apertura fallita\n Uscita in corso\n");
        return;
    }
    else{
        l1 = crea_da_file(fp);
        fclose(fp);
    }
    
    l2 = lista_fredda(l1);
    printf("\n\n");
    stampa(l1);
    printf("\n\n");
    stampa(l2);
    printf("\n\n");


    printf("Inserisci il nome di una citta' di cui vuoi vedere le info: ");
    scanf ("%s", ricerca);

    ricerca_citta(l1, ricerca);

    ordina_per_temperatura(l1);

    stampa(l1);

    fp = fopen (argv[2], "w");

    if(fp == NULL){
        printf ("Apertura fallita\n Uscita in corso\n");
        return;
    }
    else{
        crea_file_ordinato(l1, fp);
        fclose(fp);
    }
}
