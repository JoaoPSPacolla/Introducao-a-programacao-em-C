#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1
typedef struct  //bandas щ um tipo, assim como int, float e tals
{
    char nome[50];
    char tipo[50];
    int integrantes;
    int posicao;
}bandas;

//2
void inf(bandas *a) //a щ uma variavel de bandas
{
    int i;
    for(i=0; i<2; i++)
    {
        printf("Digite o nome da banda: ");
        scanf("%s", &a[i].nome);
        printf("Digite o tipo de musica que essa banda toca: ");
        scanf("%s", &a[i].tipo);
        printf("Digite quantos integrantes tem: ");
        scanf("%d", &a[i].integrantes);
        printf("Digite em qual posicao ela estс no seu TOP 5: ");
        scanf("%d", &a[i].posicao);
        fflush(stdin);
    }

    // apenas exibiчуo do que foi escrito
    //for(i=0;i<5,i++)
        //printf("\nNome da Banda: %s, Tipo: %s, Integrantes: %d, Ranking: %d\n", a[i].nome, a[i].tipo, a[i].integrantes, a[i].posicao);
}

//3
void rank(bandas *a)
{
    int escolha;
    int i;
    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &escolha);
    for(i=0;i<2;i++)
    {
        if (escolha == a[i].posicao)
        {
            printf("\nNome da Banda: %s, Tipo: %s, Integrantes: %d, Ranking: %d\n", a[i].nome, a[i].tipo, a[i].integrantes, a[i].posicao);
        }
    }
}

//4
void tipomus(bandas *a)
{
    char tipolocal[40];
    int i;
    int comp;
     // strcmp() comparar strings
     puts("Digite um tipo de musica: ");
     fflush(stdin);
     gets(tipolocal);
     //comp = strcmp(tipolocal, a[i].tipo);
     for(i=0;i<2;i++)
     {
         if(strcmp(tipolocal, a[i].tipo)==0) //0 significa que são iguais
            {
                printf("%s", a[i].nome);
            }
     }

}

//5
void bandfav (bandas *a)
{
    char nomebanda[50];
    int i;
    printf("\nDigite o nome de uma banda qualquer: ");
    fflush(stdin);
    gets(nomebanda);
    for(i=0;i<2;i++)
    {
    if(strcmp(nomebanda, a[i].nome)==0)
    {
        printf("Essa banda está entre suas favoritas");
        break;
    }
    else
        printf("\nEssa banda nao esta entre suas favoritas");
    }
}


int main()
{
    bandas infbanda[5];
    inf(infbanda);
    rank(infbanda);
    tipomus(infbanda);
    bandfav(infbanda);


    return 0;
}
