#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s=0;
    for (n=0; n<100; n++)
    {
        if(n%5==0)
            continue;
        s += n;
    }

    printf("%d", s);

    return 0;
}
