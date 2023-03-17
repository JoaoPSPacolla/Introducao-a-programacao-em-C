#include <stdio.h>
#include <stdlib.h>

int main()
{
    int atual, nasc, idade, dias, h, min, seg ;
    printf("Qual o ano atual: ");
    scanf("%i",&atual);
    printf("Qual o seu ano de nascimento: ");
    scanf("%i",&nasc);
    idade = atual - nasc;
    printf("Voce nasceu em %i, portanto sua idade e %i",nasc,idade);
    dias = idade * 365;
    h = dias * 24;
    printf("\nVoce tem %i dias e %i horas",dias,h);
    min = h * 60;
    seg = min * 60;
    printf("\nVoce tem %i minutos e %i segundos",min,seg);
}
