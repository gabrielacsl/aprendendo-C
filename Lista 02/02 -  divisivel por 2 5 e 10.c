#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    int numero;
    printf("Numero: ");
    scanf("%i", &numero);
    if (numero % 10 == 0)
    {
        printf("Divisivel por 10.\n");
    }
    if (numero % 5 == 0)
    {
        printf("Divisivel por 05.\n");
    }
    if (numero % 2 == 0)
    {
        printf("Divisivel por 02.\n");
    }
}