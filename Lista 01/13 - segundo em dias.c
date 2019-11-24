#include <stdio.h>
#include <math.h> // função matemática
#include <stdlib.h>
main()
{
    int s, c, d, dias, min, horas, m;
    printf("Valor, em segundos:\n");
    scanf("%i", &s);

    dias = s / 86400;

    c = s - (86400 * dias);
    horas = c / 3600;

    m = horas * 3600;
    min = (c - m) / 60;

    printf("Dias:%i\n", dias);
    printf("Horas:%i\n", horas);
    printf("Minutos:%i\n", min);
}
