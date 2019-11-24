#include <stdio.h>
#include <math.h>
main()
{
    int valor, i = 0, divisivel = 0;

    while (i < 5)
    {
        printf("Valor: ");
        scanf("%i", &valor);
        if (valor % 3 == 0)
        {
            divisivel++;
        }
        i++;
    }
    printf("Quantidade de divisiveis por 3: %i.\n", divisivel);
}