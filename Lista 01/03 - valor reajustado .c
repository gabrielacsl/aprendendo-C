#include <stdio.h>
#include <stdlib.h>
main()
{
    float saldo, reajuste;

    printf("Valor: ");
    scanf("%f", &saldo);

    reajuste = saldo + (saldo * 0.075);

    printf("Valor reajustado: %.2f", reajuste);
}
