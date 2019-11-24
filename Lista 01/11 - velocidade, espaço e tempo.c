#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    float espaco, velocidade, tempo;

    printf("Distancia, em km: ");
    scanf("%f", &espaco);

    printf("Velocidade, em km/h: ");
    scanf("%f", &velocidade);

    tempo = espaco / velocidade;

    printf("Tempo de viagem, em horas: %.f", tempo);
}
