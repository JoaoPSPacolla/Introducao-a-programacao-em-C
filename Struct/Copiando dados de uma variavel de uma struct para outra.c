#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct cadastro{
    char nome[50];
    int RE;
    float salario;
};

int main(void)
{
    setlocale(LC_ALL,"portuguese");
    struct cadastro func1;
    struct cadastro func2;
    printf("Digite o nome do funcion�rio: ");
    gets(func1.nome);
    printf("Digite o RE desse funcion�rio: ");
    scanf("%d", &func1.RE);
    printf("Tamb�m digite o sal�rio: ");
    scanf("%f", &func1.salario);

    strcpy(func2.nome,func1.nome);
    printf("Dados do Funcion�rio 2\n");
    printf("Nome: %s", func2.nome);
    func2.RE = func1.RE;
    //strcpy(func2.RE,func1.RE); isso n�o funciona, pois o strcpy s� da certo com STRINGS
    printf("\nRE: %i", func2.RE);
    func2.salario = func1.salario;
    printf("\nSal�rio: %.2f", func2.salario);

    printf("\n=====================================");
    printf("\nDados do Funcion�rio 1:");
    printf("\nNome: %s", func1.nome);
    printf("\nRE: %i", func1.RE);
    printf("\nSal�rio: %.2f", func1.salario);
    return 0;
}
