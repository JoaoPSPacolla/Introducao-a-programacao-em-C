#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[100];
    int n1,n2,n3;
    float m;
    printf("Qual o nome do aluno: ");
    gets(nome); //só pode ser usado com palavras que tenham mais de um caracter
    printf("Qual a primeira nota do aluno: ");
    scanf("%i",&n1);
    printf("Qual a segunda nota do aluno: ");
    scanf("%i",&n2); //lembra de colocar esse &
    printf("Qual a terceira nota do aluno: ");
    scanf("%i",&n3);
    m = (n1+n2+n3)/3;
    printf("O aluno %s teve as notas %i, %i, %i, portanto, sua media vai ser %.2f",nome, n1, n2, n3, m);

}
