#include <stdio.h>
#include <stdlib.h>
main()
{

    char turno;

    printf("Periodo: ");
    printf("\n M - matutino\n V - vespertino\n N - noturno\n");
    scanf(" %c", &turno);

    switch (turno)
    {
    case 'm':
        printf("Bom dia!\n");
        break;

    case 'v':
        printf("Boa tarde!\n");
        break;

    case 'n':
        printf("Boa noite!");
        break;

    default:
        printf("Digite um periodo valido!\n");
    }
}
