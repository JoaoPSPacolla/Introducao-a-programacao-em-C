#include <stdio.h>
#include <stdlib.h>

// ESSE C�DIGO N�O FOI FINALIZADO
// ESSE C�DIGO N�O FOI FINALIZADO
// ESSE C�DIGO N�O FOI FINALIZADO
// ESSE C�DIGO N�O FOI FINALIZADO
// ESSE C�DIGO N�O FOI FINALIZADO

  struct aluno{
    char nome[30];
    char email[100];
    };

int main()
{
    struct aluno notas[5];
    int i; // A vari�vel de contagem OBRIGATORIAMENTE, deve ser INT

    for (i=0; i<5; i++)
    {
        printf("Digite o nome do aluno: ");
        gets(notas[i].nome);
        printf("Digite o email do aluno: ");
        gets(notas[i].email);
    };
   return 0;
}
