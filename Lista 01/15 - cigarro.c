#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    int anos, carteira, cigdia, valor, gasto;
    printf("Fuma ha quantos anos?: ");
    scanf("%i", &anos);
    printf("Valor da carteira: ");
    scanf("%i", &valor);
    printf("Numero de cigarros por dia?: ");
    scanf("%i", &cigdia);

    carteira = (20 / cigdia);
    anos = carteira * 365;
    gasto = carteira * anos * valor;

    printf("Gasto com cigarro: %i\n", gasto);
}
