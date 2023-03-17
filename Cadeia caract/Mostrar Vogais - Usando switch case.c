#include <stdio.h>
#include <string.h>



void main()
{


int qtdVogais = 0;
char troca, palavra[100];

printf("Digite uma palavra: ");
fgets(palavra, 100, stdin);
printf("\nAs vogais serão substituídas por qual letra?\n");
scanf("%c", &troca);

for (int i = 0; palavra[i] != '\0'; i++){
    switch(palavra[i]) { // se é vogal, atualiza o contador e troca a letra
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            qtdVogais++;
            palavra[i] = troca;
    }
}

if (qtdVogais == 1)
    printf("\nA palavra informada possui 1 vogal!\n");
else
    printf("\nA palavra informada possui %d vogais!\n", qtdVogais);

printf("Resultado: %s\n", palavra);

}
