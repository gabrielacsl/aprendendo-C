#include <stdio.h>
#include <stdlib.h>
main()
{
    float temperatura, c, f;
    char tipo;

    printf("Temperatura: ");
    scanf("%f", &temperatura);
    printf("Convercao: \nf - fahrenheit.\nc - celsius.\n");
    scanf(" %c", &tipo);

    switch (tipo)
    {

    case 'c':
        f = (9 / 5) * temperatura + 32;
        printf("Fahrenheit:%.1f\n", f);
        break;

    case 'f':
        c = (temperatura - 32) / 1.8;
        printf("Celsius:%.1f\n", c);
        break;
    }
}
