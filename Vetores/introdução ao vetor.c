#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valores[5];
    int i;
    float soma=0, media;

    //obter os valores do vetor
    for (i=0; i<5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]); // o valores acompanham o aumento do numero de posições
    }

    // exibir o vetor (posição e valor armazenado)
    for (i=0; i<5; i++)
    {
        printf("\nPosição %d - valor armazenado %d", i, valores[i]);
    }

    //soma valores do vetor
    for (i=0; i<5; i++)
    {
        soma = soma + valores[i];
    }

    //media dos valores
    {
        media = soma/5;
        printf("\nMedia %.2f", media);
    }
    return 0;
}
