#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int verificavogal (int l)
{
    switch (l){
    case 'A':
        return 1;
    case 'E':
        return 1;
    case 'I':
        return 1;
    case 'O':
        return 1;
    case 'U':
        return 1;
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char x;
        printf("Digite uma letra: ");
        scanf("%c",&x);
        x = toupper(x);
    if(verificavogal(x)==1)
        printf("\nO caractere [ %c ] é uma vogal ",x);
    else
        printf("\nO caractere [ %c ] não é uma vogal ",x);
        printf("\n\n");
    return(0);
}
