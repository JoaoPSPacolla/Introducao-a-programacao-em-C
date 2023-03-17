#include <stdio.h>
#include <stdlib.h>
#define MAX 7

int main()
{
    int num[MAX], positivo[MAX], negativo[MAX];
    int i, p=0, n=0;

    for (i=0; i<MAX; i++)
    {
     printf("Digite um numero: ");
     scanf("%d", &num[i]);

     if (num[i]>0)
     {
        positivo[p]= num[i];
        p++;
     }
     else
     {
        negativo[n]= num[i];
        n++;
     }
    }

    for (p=0; p<MAX; p++)
        printf("\nOs positivos sao: %d", positivo[p]);
        printf("\n---------------------------------------------------------------");
    for (n=0; n<MAX; n++)
        printf("\nOs negativos sao: %d", negativo[n]);
    return 0;
}
