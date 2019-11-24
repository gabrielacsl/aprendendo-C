#include <stdio.h>
main()
{
    int i = 1, n = 1, fatorial = 1, calculo;

    printf("Quantidade calculos: ");
    scanf("%i", &calculo);

    while (calculo > 0)
    {
        printf("Valor: ");
        scanf("%i", &n);
        i = 1;
        fatorial = 1;

        while (i <= n)
        {
            fatorial *= i;
            i++;
        }
        printf("Fatorial %i = %i\n", n, fatorial);
        calculo--;
    }
}