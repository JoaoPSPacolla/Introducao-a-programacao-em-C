#include <stdio.h>
#include <stdlib.h>

int main()
{
   float qi,qf, cal;
   printf("Qual a quilometragem inicial: ");
   scanf("%f",&qi);
   printf("Qual a quilometragem final: ");
   scanf("%f",&qf);
   cal = qf-qi;
   printf("A qi e %.2f e a qf e %.2f. A distância percorrida foi de %.2f",qi,qf,cal);
   return 0;
}
