#include <stdio.h>
#include <stdlib.h>
main()
{
    int i, numero = 0;

    for (i = 1; i <= 20; i++)
    {
        printf("%i\n", i);
        numero += i;
    }
    printf("Soma: %i\n", numero);
}