#include <stdio.h>
#include <stdlib.h>
main()
{

    char tipo;
    float combustivel, pagamento;

    printf("Combustivel, em litros:\n");
    scanf("%f", &combustivel);
    printf("Tipo:\na - alcool.\ng - gasolina.\n");
    scanf(" %c", &tipo);

    switch (tipo)
    {
    case 'a':
        if (combustivel <= 15)
        {
            pagamento = combustivel * 2;
            printf("Pagamento:%.2f\n", pagamento);
        }
        else if (combustivel > 15 && combustivel <= 30)
        {
            pagamento = combustivel * 1.95;
            printf("Pagamento:%.2f\n", pagamento);
        }
        else
        {
            pagamento = combustivel * 1.80;
            printf("Pagamento:%.2f\n", pagamento);
        }
        break;

    case 'g':
        if (combustivel <= 15)
        {
            pagamento = combustivel * 2.95;
            printf("Pagamento:%.2f\n", pagamento);
        }
        else if (combustivel > 15 && combustivel <= 30)
        {
            pagamento = combustivel * 2.85;
            printf("Pagamento:%.2f\n", pagamento);
        }
        else
        {
            pagamento = combustivel * 2.75;
            printf("Pagamento:%.2f\n", pagamento);
        }
        break;

    default:
        printf("Invalido.");
    }
}