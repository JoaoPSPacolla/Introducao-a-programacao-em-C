#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define max 50

int main()
{
    char palavra[max], copia[max];
    printf("Digite uma palavra: ");
    gets(palavra);
    printf("\nString digitada: %s", palavra);

    strcpy(copia,palavra);
    printf("\nCopia: %s", copia);

    int i;
    for(i=0;i<max;i++);
    {
        if(palavra[i]=='a')
            copia[i]='x';
    }

    printf("\nString digitada: %s",palavra);
    printf("\nString copiada: %s\n",copia);
    system("PAUSE");


    return 0;
}
