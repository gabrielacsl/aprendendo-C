#include <stdio.h>
#include <stdlib.h>
main()
{
    float p, h, imc;

    printf("Altura:\n");
    scanf("%f", &h);

    printf("Peso:\n");
    scanf("%f", &p);

    imc = p / (h * h);

    if (imc < 20)
    {
        printf("abaixo do peso ideal.\n");
    }
    else if (imc <= 26)
    {
        printf("Peso normal.\n");
    }
    else if (imc <= 30)
    {
        printf("Excesso de peso.\n");
    }
    else if (imc <= 35)
    {
        printf("Obesidade.\n");
    }
    else if (imc >= 36)
    {
        printf("Obesidade morbida.\n");
    }

}
