#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void area(int *a, int tq);
void perimetro(int *p, int tq);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int tq;
    int a, p;
    printf("Digite o tamanho do lado de um quadrado: ");
    scanf("%d", &tq);
    area(&a,tq);
    perimetro(&p,tq);
    printf("Área: %d m²", a);
    printf("\nPerímetro: %d m", p);
}

void area(int *a,int tq)
{
   //area//
   *a = tq*tq ;
}

void perimetro(int *p, int tq)
{
   //perimetro//
   *p = (tq * 4);
}

void diag (int *d, int tq)
{
    *
}
