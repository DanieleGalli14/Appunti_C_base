#include <stdio.h>
#include "liste.h"

void main(int argc, char *argv[]){
    
    if(argc != 3){
        printf("Formato dei comandi invalido\nIl formato da inserire e' <nome eseguibile> <dati.txt> <dati_matricola.txt>\n\n");
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
    
    stampa(l1);
    printf("\n");

    printf("Inserisci il nome della matricola di cui vuoi vedere i voti (formato Ixxxx): ");
    scanf ("%s", ricerca);

    media_matricola(l1, ricerca);

    printf("Inserisci il nome della matricola di cui vuoi creare una sottolista (formato Ixxxx): ");
    do{
        scanf ("%s", ricerca);
        if((esiste(l1, ricerca) == 0))
            printf("Ripetere: ");
    }while(esiste(l1, ricerca) == 0);

    l2=crea_matricola(l1, ricerca);
    stampa(l2);
    printf("\n\n");

    ordina(l2);


    stampa(l2);
    printf("\n");

    fp = fopen (argv[2], "w");

    if(fp == NULL){
        printf ("Apertura fallita\n Uscita in corso\n");
        return;
    }
    else{
        crea_file_matricola(l2, fp);
        fclose(fp);
    }
}
