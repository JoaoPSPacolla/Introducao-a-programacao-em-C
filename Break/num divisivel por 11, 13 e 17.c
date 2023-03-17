#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("O primeiro numero que e divisivel por 11, 13 e 17 ao mesmo tempo E: ");
    for (n=1; n<=1000001; n++)
    {
        if ((n%11==0)&&(n%13==0)&&(n%17==0))
            break;
    }

     printf("\n%d", n);

    return 0;
}
