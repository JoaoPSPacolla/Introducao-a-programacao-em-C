#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ra, cont=0, n1, n2, m, mt=0, mf, a=0;
    printf("Cadastro de RAs e Notas\n");
    for (cont=0; cont<=10; cont++){
        printf("Qual o RA do aluno: ");
        scanf("%d", &ra);
        printf("Digite a primeira nota do aluno: ");
        scanf("%i", &n1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%i", &n2);
        printf("A média do aluno de RA %i foi %i \n", ra, m);
        m = (n1 + n2)/2;
        if (m >= 6){
            a += 1;
            printf("Aprovado \n");
        }
        else
            printf("Reprovado \n");
        mt += m;
        printf("\n");
    }

    mf = (mt/10);
    printf("A media da turma foi %d", mf);
    printf("O total de alunos aprovados foi %i", a);
    return 0;
}
