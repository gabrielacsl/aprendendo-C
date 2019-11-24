#include <stdio.h>
main()
{
    float area, base, altura;

    printf("Altura: ");
    scanf("%f", &altura);
    printf("Base: ");
    scanf("%f", &base);

    area = (base * altura) / 2;
    printf("Area:%.2f\n\n", area);
}
