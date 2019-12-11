#include <stdio.h>
#include <math.h>

main()
{
    float raio;
    double volume;

    scanf("%f", &raio);

    volume = (4 / 3.0) * 3.14159 * (pow(raio, 3));

    printf("VOLUME = %.3f\n", volume);
}