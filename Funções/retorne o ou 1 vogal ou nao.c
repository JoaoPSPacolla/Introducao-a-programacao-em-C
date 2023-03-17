#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char verificavogal(x){
    if(x='AEIOUaeiou')
        verificavogal == 1;
    else
        verificavogal==0;
    return verificavogal;
}


main()
{
    setlocale(LC_ALL,"Portuguese");
    char x;
    int resultado;
    printf("Digite uma letra: ");
    scanf("%c",&x);
    resultado = verificavogal(x);
    if(resultado==1)
        printf("\nO caractere [ %c ] é uma vogal ",x);
    else
        printf("\nO caractere [ %c ] não é uma vogal ",x);
    printf("\n\n");
    return(0);
}
