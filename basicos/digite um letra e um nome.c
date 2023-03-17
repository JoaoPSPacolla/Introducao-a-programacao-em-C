#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Definir um idioma
#include <ctype.h> //Usar o toupper - toupper letra maiuscula
void main()
{
  char letra,nome[40];
  setlocale(LC_ALL,"Portuguese");//definição de idioma
  printf("Digite uma letrinha:");
  scanf("%c",&letra);
  printf("A letra digitada é: %c",letra);
  printf("\nDigite seu nome:");
  setbuf(stdin,NULL);
  scanf("%s",&nome);
  printf("O nome digitado foi: %s",nome);


}
