#include <stdio.h>
#include <stdlib.h>

int main()

{

    struct vendedor{
    int matricula;
    char nome[50];
    float totalvenda;
    float comissao;
    };

    struct vendedor vend [10];
    int i;
    float somac = 0;

    //lendo dados do funcionairio1

    for(i=0; i<10; i++)
    {
    printf("Dados do vendedor %d\n\n\n\n", i+1);


    printf("nome........:");
    scanf("%s", &vend[i].nome);
   // gets(vend.nome[i]);
    printf("matricula........:");
    scanf("%d", &vend[i].matricula);
    printf("total venda do mes........:");
    scanf("%f", &vend[i].totalvenda);

    //calculando comissão
    if (vend[i].totalvenda>5000){
        printf("bonus        !");
        vend[i].comissao = vend[i].totalvenda * 0.1;
        printf("\n comissão %.2f", vend[i].comissao);
        somac += vend[i].comissao;
    }
    else{
        vend[i].comissao = 0;
    }
    setbuf (stdin, NULL);
    }

    for(i=0; i<10; i++){
    //imprimindo dados do vendedor
    printf("\n\nNome: %s\n",vend[i].nome);
    printf("\n\nMatricula: %d\n",vend[i].matricula);
    printf("Total de venda: R$%.2f\n",vend[i].totalvenda);
    printf("comisao: %f.2f\n",vend[i].comissao);
    system("pause");
    }

    printf("A soma das comissoes e: %.2f", somac);
    return 0;
}
