#include <stdio.h>
#include <stdlib.h>
main()
{

    float valor, condicao, pagamento, parcela;

    printf("Valor da compra: ");
    scanf("%f", &valor);

    printf("Condição de pagamento.\n");
    printf("01 - a vista no dinheiro ou cheque.\n");
    printf("02 - a vista no crédito.\n");
    printf("03 - em 2x sem juros.\n");
    printf("04 - em 3x com juros.\n");
    scanf("%f", &condicao);

    if (condicao == 01)
    {
        pagamento = valor - (valor * 0.1);
        printf("O total a ser pago é de:%.2f\n", pagamento);
    }
    else if (condicao == 02)
    {
        pagamento = valor - (valor * 0.05);
        printf("O total a ser pago é de:%.2f\n", pagamento);
    }
    else if (condicao == 03)
    {
        pagamento = valor / 2;
        printf("O total a ser pago é de:%.2f\n", valor);
        printf("O valor da parcela é de:%.2f\n", pagamento);
    }
    else if (condicao == 04)
    {
        pagamento = valor + (valor * 0.1);
        parc = (pagamento / 3);
        printf("O total a ser pago é de:%.2f\n", pagamento);
        printf("O valor da parcela é de:%.2f\n", parc);
    }
    else
    {
        printf("Digite um código de pagamento válido.\n");
    }
}
