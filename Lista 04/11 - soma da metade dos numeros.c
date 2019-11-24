#include <stdio.h>
#include <stdlib.h>
main()
{
    float i, numero = 0;

    for (i = 1; i <= 20; i++)
    {
        printf("%.2f\n", i);
        numero += (i / 2);
    }
    printf("Soma: %.2f\n", numero);
}