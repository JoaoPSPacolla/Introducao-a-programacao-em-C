#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    char sexo;
    float p, pmh, pmm, qm, qh;
    int i;
    setlocale(LC_ALL,"portuguese");
    do{
        printf("Digite sua idade: ");
        scanf("%d",&i);
        if(i<=0)
            break;
        printf("Digite o peso: ");
        scanf("%f", &p);
        do{
        printf("Digite o sexo: ");
        setbuf(stdin,NULL); // para parar de repetir o digite sexo
        scanf("%c", &sexo);
        sexo=toupper(sexo);
        }while((sexo!='M')&&(sexo!='F'));
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        if (sexo=='M'){
            qh++;
            pmh+=p;
        }
        if (sexo=='F'){
            qm++;
            pmm+=p;
        }
    }while(i!=0);
    pmm=pmm/qm;
    pmh=pmh/qh;
    printf("Total de homens = %.2f\nTotal de mulheres = %.2f\nO peso médio masculino = %.2f\nO peso médio feminino = %.2f", qh,qm,pmh,pmm);
}

