#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //usar o portugues
void main()
{
    setlocale(LC_ALL,"Portuguese");//definiзгo de idioma
    float n1, n2, media;
    char nome_disciplina[40]; //declarar variavel de no maximo 40 linhas
    int ra;
    printf("\nDigite o RA do aluno: ");
    scanf("%d",&ra);
    printf("\nO RA é igual a: %d ",ra);
    printf("\nDigite a sua primiera nota: ");
    scanf("%f",&n1);
    printf("\nDigite a sua segunda nota: "); //escreva
    scanf("%f",&n2);
    media = (n1+n2)/2;
    printf("Digite o nome da disciplina: ");
    setbuf(stdin,NULL);
    gets(nome_disciplina); // leia - usado para texto mais de um caracter
    printf("O aluno na disciplina %s teve a media %.2f",nome_disciplina,media);
    //S é varios e C é só 1
}
