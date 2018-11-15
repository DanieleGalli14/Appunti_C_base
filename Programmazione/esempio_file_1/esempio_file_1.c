// Esempio di file 1:
// - leggere il contenuto di un file chiamato "dati1.txt"
// - salvare all'interno di tre variabili x, y e z il valore di ogni riga
// - scrivere il valore di z, y e x in un nuovo file chiamato "dati2.txt"

#include <stdio.h> // <stdio.h> contiene le funzioni sui file
#include <stdlib.h>

int main()
{

    int x, y, z;

    FILE *fp1, *fp2; // puntatore al file

    fp1 = fopen("dati1.txt", "r"); // apre il file "dati1.txt" in lettura

    fp2 = fopen("dati2.txt", "w"); // apre il file "dati2.txt" in scrittura (cancellando il vecchio contenuto)

    if (fp1==NULL || fp2==NULL) // file non trovato (la costante NULL indica che il puntatore al file non e' stato utilizzato)
    {
        printf("File 'dati1.txt' o 'dati2.txt' non trovato!");
    }
    else // file trovati
    {
        while(fscanf(fp1, "%d %d %d", &x, &y, &z) != EOF) // scorre il file fino a che non arriva alla fine (EOF)
        {
            printf("Valori letti nella riga del file: x=%d, y=%d, z=%d", x, y, z);
            printf("\n");

            // scrive i valori nel file
            fprintf(fp2, "%d %d %d \n", z, y, x);
        }

        fclose(fp1); // chiude il file puntato da fp1
        fclose(fp2);
    }

    return 0;
}
