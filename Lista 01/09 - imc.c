#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
    float peso, altura, imc;

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);
}
