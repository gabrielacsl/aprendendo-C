#include "stdio.h"
#include "locale.h"
main()
{
    int i, idade, salario, feminino = 0, masculino = 0, somaidade = 0, menorsalario, somasalario = 0;
    char sexo;
    for (i = 0; i < 40; i++)
    {
        printf("Sexo: \n");
        scanf(" %c", &sexo);
        printf("idade: \n");
        scanf("%i", &idade);
        printf("Salario: \n");
        scanf("%i", &salario);

        somaidade += idade;
        somasalario += salario;

        switch (sexo)
        {
        case 'f':
            feminino++;
            if (salario < 500)
            {
                menorsalario++;
            }
            break;

        case 'm':
            masculino++;
            break;
        }
    }
    printf("Media salarial: %i\n", somasalario / i);
    printf("Media idade: %i\n", somaidade / i);
    printf("Percentual feminino: %i\n", feminino * 100 / i);
    printf("Percentual masculino: %i\n", masculino * 100 / i);
    printf("Salario menor que 500: %i\n", menorsalario);
}