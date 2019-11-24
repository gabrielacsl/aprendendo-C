#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{

    float valor, desconto;

    printf("Valor:\n\n");
    scanf("%f", &valor);

    desconto = valor - (valor * 0.09);

    printf("Valor a ser pago:%f\n", desconto);
}
