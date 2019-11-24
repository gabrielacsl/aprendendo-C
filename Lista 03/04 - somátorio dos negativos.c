#include <stdio.h>
#include <math.h>
main()
{
    int valor, soma;

    while (valor != 0)
    {
        printf("Valor: ");
        scanf("%i", &valor);

        if (valor < 0)
        {
            soma -= valor;
        }
    }
    printf("Soma dos negativos: -%i.\n", soma);
}