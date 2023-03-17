#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[40];
    int i;
    printf("Digite um nome: ");
    gets(nome);
   // strlen(nome);
    for (i=0;i<4;i++)
        printf("%c",nome[i]);
    return 0;
}
