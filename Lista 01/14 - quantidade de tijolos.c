#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    int alt, larg, tij;

    printf("Altura parede:\n");
    scanf("%i", &alt);
    printf("Largura parede:\n");
    scanf("%i", &larg);

    tij = (alt * larg) / (0.325 * 0.225);

    printf("Numero de tijolos: %i\n", tij);
}
