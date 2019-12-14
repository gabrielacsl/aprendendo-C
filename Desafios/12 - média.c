#include <stdio.h>
main()
{
    float nota[4], media;
    scanf("%f %f %f %f", &nota[0], &nota[1], &nota[2], &nota[3]);
    printf("%.1f\n", (nota[0] + nota[1] + nota[2] + nota[3]) / 4);
}