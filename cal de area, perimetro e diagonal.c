#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int area(int *a);
int perimetro(int *p);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int tq;
    int a, p;
    printf("Digite o tamanho do lado de um quadrado: ");
    scanf("%d", &tq);
    area(&tq);
    //perimetro(&tq);
    printf("Área: %d m²", tq);
    //printf("\nPerímetro: %d m", p);
}

int area(int *a)
{
   //area//
   *a *= *a;
}

/*
int perimetro(int *p)
{
   //perimetro//
   *p = (*p * 4);
}*/
