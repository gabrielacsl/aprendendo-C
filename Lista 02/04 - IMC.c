#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{

    float altura, peso, ideal;
    char sexo;

    printf("Altura: ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);
    printf("Sexo (f/m): ");
    scanf(" %c", &sexo);

    if (sexo == 'f')
    {
        ideal = (62.1 * altura) - 44.7;
        printf("Diferenca: %.2f\n", peso - ideal);
    }
    if (sexo == 'm')
    {
        ideal = (72.7 * altura) - 58;
        printf("Diferenca: %.2f\n", peso - ideal);
    }
    if (peso < ideal)
    {
        printf("Abaixo do ideal.\n");
    }
    else if (peso == ideal)
    {
        printf("Peso ideal.\n");
    }
    else if (peso > ideal)
    {
        printf("Acima do ideal.\n");
    }
}