#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s;
    float notas[3][10], media=0, soma=0, somaluno;
    for (i=0; i<3; i++)
    {
        printf ("Entre com as notas da prova %d\n", i+1);
        for (j=0; j<10; j++)
        {
            printf("Entre com a nota do aluno %d: ", j+1);
            scanf("%f", &notas [i][j]);
            soma += notas [i][j];
        }
    }

    for (j=0; j<10; j++)
    {
        somaluno=0;
        printf("\nAs notas do aluno %d são: \n", j+1);
        for (i=0; i<3; i++)
        {
            printf(" %.1f\n", notas[i][j]); //aqui nesse for ele vai um por um // Vai receber cada nota, acumular uma por uma (e somando-as)
            somaluno += notas[i][j];
        }
    //Aqui nesse, ao contrário dos anterior, não vai fazer uma por uma, mas vai com as 3 já direto de um vez
    media = somaluno/3;
    printf("Media: %.1f", media); //isso tá dentro desse for --> for (j=0; j<10; j++), mas fora do outro for -->  for (i=0; i<3; i++)
    }

    printf("\n%d", soma);
    return 0;
}
