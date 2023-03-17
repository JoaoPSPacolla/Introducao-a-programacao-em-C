#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavra[60], vogal[]= "AaEeIiOoUu"; // vc cria um vetor para vogal e define todas as vogais
    int qtdv = 0;
    int i, j;

    printf("Digite uma palavra: ");
    gets(palavra);
    //strupr(palavra);

    for (i=0;i<strlen(palavra);i++){
        for (j=0;j<strlen(vogal);j++){
            if (palavra[i] == vogal[j])
                qtdv++;
        }
    }

//if((strlen(palavra[i]=='A')&&(strlen(palavra[i]=='E')&&(strlen(palavra[i]=='I')&&(strlen(palavra[i]=='O')&&(strlen(palavra[i]=='U')))))))
//qtdv += 1;

    printf("A palavra %s tem %d vogais", palavra, qtdv);

    return 0;
}
