#include <stdio.h>
#include <math.h>
main()
{
    int numero, i = 0;
    printf("Numero: ");
    scanf("%i", &numero);

    while (i <= 10)
    {

        printf("%i x %i = %i\n", numero, i, numero * i);
        i++;
    }
}