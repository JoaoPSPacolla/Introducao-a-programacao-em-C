#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"portuguese");
   int pecas[9], preco[9];
   int i, j, t;
   int total;

   for(i=0;i<9;i++)
   {
       printf("Quantidade de peças vendidas (%d): ", i);
       scanf("%d", &pecas[i]);
   }

   printf("\n\n");

   for(j=0;j<9;j++)
   {
       printf("Qual o preço  da peça (%d): ", j);
       scanf("%d", &preco[j]);
   }


   printf("\n\n");

   for(t=0;t<9;t++)
   {
       total = pecas[t]*preco[t];
       printf("O valor total da peça (%i) foi de: %d\n", t, total);
   }
}
