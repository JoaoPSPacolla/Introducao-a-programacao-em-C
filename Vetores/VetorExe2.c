#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 9

int main()
{
    setlocale (LC_ALL,"Portuguese");
        int vetor [MAX];
        int i, x, quantidade;

        for (i=0; i<MAX; i++) {
            printf ("\nDigite um valor: ");
            scanf ("%d", &vetor[i]);

            do {
             for (x=1; x<=vetor[i]; x++) {
                if (vetor[i] % x == 0)
                    quantidade++;
                if (quantidade == 2)
                    printf ("Primo\n");
                else
                    printf ("Não é primo\n");
             }
            } while (x < vetor[i]);
        }

    return 0;
}
