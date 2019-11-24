#include <stdio.h>
#include <stdlib.h>
main()
{

    float maxima, minima, multa, diferenca;

    printf("velocidade máxima permitida:\n");
    scanf("%f", &maxima);

    printf("velocidade usada pelo motorista?\n");
    scanf("%f", &minima);

    diferenca = minima - maxima;

    if (dif <= 10)
    {
        multa = 50;
        printf("O valor a ser pago deverá ser de: %.2f\n", multa);
    }
    else if (dif <= 30)
    {
        multa = 100;
        printf("O valor a ser pago deverá ser de: %.2f\n", multa);
    }
    else
    {
        multa = 200;
        printf("O valor a ser pago deverá ser de: %.2f\n", multa);
    }

    system("pause");
}
