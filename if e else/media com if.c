#include <stdio.h>
#include <stdlib.h>
 #include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    char nome[40];
    float n1,n2,n3,media;
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite as notas das tr�s provas: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    printf(" Nome: %s\n",nome);
    printf(" Prova1: %.1f\n Prova2: %.1f\n Prova3: %.1f\n M�dia: %.1f\n",n1,n2,n3,media);
        if (media < 6)
            printf("Resultado: Reprovado");
        else
            printf("Resultado: Aprovado");
    return 0;
}
