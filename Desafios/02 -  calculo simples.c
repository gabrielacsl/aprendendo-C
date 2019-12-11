#include <stdio.h>
main()
{
    int quantidade[2], codigo[2];
    float valor[2], total;
	
    scanf("%i %i %f", &codigo[0], &quantidade[0], &valor[0]);
    scanf("%i %i %f", &codigo[1], &quantidade[1], &valor[1]);
    
    total = (quantidade [0] * valor[0]) + (quantidade [1] * valor[1]);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}
