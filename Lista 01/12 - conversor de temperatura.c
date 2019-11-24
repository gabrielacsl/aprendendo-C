#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    float f, c;

    printf("Fahrenheit:\n");
    scanf("%f", &f);

    c = (f - 32) / 1.8000;

    printf("Celsius e de: %.2f", c);
}
