#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    float vendedor, fixo, vendas, salario;

    printf("Numero do vendedor: ");
    scanf("%f", &vendedor);

    printf("Valor de vendas que ele fez: ");
    scanf("%f", &vendas);

    printf("Valor salario: ");
    scanf("%f", &fixo);

    salario = fixo + (vendas * 0.05);

    printf("Salario vendedor: %.2f)", salario);
}
