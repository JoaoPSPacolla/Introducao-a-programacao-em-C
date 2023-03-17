#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //biblioteca que tem o sleep

int main()
{
    int cont;
    printf("Contagem Crescente\n");
    for(cont=1;cont<=10;cont++)
        printf("%d ", cont);

    printf("\n Vai explodir em...\n");
    for (cont=10;cont>0;cont--)
    {
        printf("%i ",cont);
        sleep(1);
    }
    printf("BOOOOOOOOM");
    return 0;
}
