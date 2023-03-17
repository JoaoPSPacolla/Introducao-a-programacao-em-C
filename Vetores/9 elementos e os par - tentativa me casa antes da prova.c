#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int vetor[9];
    int i;
    int j;

    printf("Digite 9 valores: ");

    for (i=0; i<9; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i=0;i<9;i++)
    {
        if (vetor[i]%2==0);
            printf("O valor %d é par e está na posição %i\n", vetor[i], i);
    }

    return 0;
}
