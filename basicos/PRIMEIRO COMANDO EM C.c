#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char letra = 'x';
    //int idade = 50;
    //float nota = 9.5;
    //printf("Valores das variaveis:\nletra=%c, \n%d e \n%f",letra,idade,nota);
    //return 0;

    float total,recebido,troco;
    printf("Digite o valor total: ");
    scanf("%f",&total);
    printf("Digite o valor recebido: ");
    scanf("%f",&recebido);
    troco=recebido-total;
    printf("Troco=%f",troco);
    return 0;

}
