#include <stdio.h>
#include <stdlib.h>
main()
{
    int n, i;
    printf("Numero: ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%i multiplo de 3 e 5.\n", i);
        }
    }
}    