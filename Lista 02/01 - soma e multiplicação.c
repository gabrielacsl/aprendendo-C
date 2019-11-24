#include <stdio.h>
main()
{
    int a, b, resultado;

    printf("Valor A: ");
    scanf("%i", &a);
    printf("Valor B: ");
    scanf("%i", &b);

    if (a == b)
    {
        resultado = a + b;
    }
    else
    {
        resultado = a * b;
    }
    printf("Resultado: %i\n", resultado);
}