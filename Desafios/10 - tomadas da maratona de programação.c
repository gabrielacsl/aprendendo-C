#include <stdio.h>
main()
{
    int tomada[4], total;
    scanf("%i %i %i %i", &tomada[0], &tomada[1], &tomada[2], &tomada[3]);

total = (tomada[0] - 1) + (tomada[1] - 1) + (tomada[2] - 1) + (tomada[3]);  
printf("%i\n", total);
}