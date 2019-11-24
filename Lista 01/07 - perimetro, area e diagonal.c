#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    float lado, perimetro, area, diagonal;

    printf("Lado do quadrado: ");
    scanf("%f", &lado);

    perimetro = lado * 4;
    area = lado * lado;
    diagonal = lado * (2 ^ (1 / 2));

    printf("Perimetro:%.2f\n", perimetro);
    printf("Area:%.2f\n", area);
    printf("Diagonal:%.2f\n", diagonal);
}
