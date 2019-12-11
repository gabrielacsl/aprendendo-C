#include <stdio.h>
main()
{
    float a, b, c;
    double AreaTriangulo, AreaCirculo, AreaTrapezio, AreaQuadrado, AreaRetangulo;
    scanf("%f %f %f", &a, &b, &c);

    AreaTriangulo = a * c / 2;
    AreaCirculo = 3.14159 * c * c;
    AreaTrapezio = (a + b) / 2 * c;
    AreaQuadrado = b * b;
    AreaRetangulo = a * b;

    printf("TRIANGULO: %.3f\n", AreaTriangulo);
    printf("CIRCULO: %.3f\n", AreaCirculo);
    printf("TRAPEZIO: %.3f\n", AreaTrapezio);
    printf("QUADRADO: %.3f\n", AreaQuadrado);
    printf("RETANGULO: %.3f\n", AreaRetangulo);
}