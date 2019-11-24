#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
    float raio, area;

    printf("Valor do raio: ");
    scanf("%f", &raio);

    area = ((raio * raio) / 3.14159);

    Printf("Area do circulo: %.2f", area);
}
