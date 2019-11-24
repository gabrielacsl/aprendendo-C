#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    float qw, salario, valort, valorc, valord;

    printf("Valor do salario minimo: ");
    scanf("%f", &salario);

    printf("Quantidade de quilowatts gasta: ");
    scanf("%f", &qw);

    valorc = (qw * (0, 05 * salario)); //valor de cada quilowatt
    valort = valorc * qw;              //valor total a ser pago
    valord = valort - (0.15 * valort);

    printf("Valor por quilowatt:%.2f\n", valorc);
    printf("Valor total a ser pago:%.2f\n", valort);
    printf("Valor com desconto:%.2f\n", valord);
}
