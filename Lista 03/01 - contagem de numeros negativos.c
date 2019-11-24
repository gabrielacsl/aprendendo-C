#include <stdio.h>
#include <math.h>
main()
{
    int valor, i = 0, negativos = 0;

    while (i < 5)
    {
        printf("Valor: ");
        scanf("%i", &valor);

        if (valor < 0)
        {
            negativos++;
        }
        i++;
    }
    printf("Quantidade de negativos: %i\n", negativos);
}