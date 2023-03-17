#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("insira dois numeros: ");
    scanf("%d %d", &a,&b);
    if (a == b)
        printf("Os valores digitados foram %i e %i", a,b);
    else
    {
        // Quando vc quer colocr mais de um dado dentro do if ou do else, use as chaves { }
        printf("Você digitou os valores %d e %d\n", a,b);
        printf("Os valores digitados s~~]ao diferentes");
    }
    return 0;
}
