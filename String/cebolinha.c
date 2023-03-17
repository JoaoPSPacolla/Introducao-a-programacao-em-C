#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 50
int main()
{
    setlocale(LC_ALL,"Portuguese");

    char palavra[MAX], copia[MAX];
    int x, tamanho;

    printf ("Digite uma palavra: ");
    gets (palavra);
    strcpy (copia, palavra);
    tamanho = strlen (palavra);
    for (x=0; x<tamanho; x++){
        if (palavra [x]=='r')
            copia[x]='l';
    }
    printf ("\nVocê fala: %s\n", palavra);
    printf ("O cebolinha repete: %s\n", copia);
    printf ("possui %d letras\n", tamanho);

    return 0;
}
