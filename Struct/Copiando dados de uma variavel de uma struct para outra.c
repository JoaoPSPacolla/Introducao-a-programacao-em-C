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
    printf("Digite o nome do funcionário: ");
    gets(func1.nome);
    printf("Digite o RE desse funcionário: ");
    scanf("%d", &func1.RE);
    printf("Também digite o salário: ");
    scanf("%f", &func1.salario);

    strcpy(func2.nome,func1.nome);
    printf("Dados do Funcionário 2\n");
    printf("Nome: %s", func2.nome);
    func2.RE = func1.RE;
    //strcpy(func2.RE,func1.RE); isso não funciona, pois o strcpy só da certo com STRINGS
    printf("\nRE: %i", func2.RE);
    func2.salario = func1.salario;
    printf("\nSalário: %.2f", func2.salario);

    printf("\n=====================================");
    printf("\nDados do Funcionário 1:");
    printf("\nNome: %s", func1.nome);
    printf("\nRE: %i", func1.RE);
    printf("\nSalário: %.2f", func1.salario);
    return 0;
}
