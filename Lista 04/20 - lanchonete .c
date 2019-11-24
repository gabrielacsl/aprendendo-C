#include <stdio.h>
#include<stdlib.h>
main()
{
    int sexo, opiniao, i, masculino = 0, feminino = 0, masculinootimo;
    float otimo, ruim;

    for (i = 1; i <= 40; i++)
    {

        printf("1 - masculino 2 - feminino\n");
        scanf("%i", &sexo);
        printf("Cardapio: 1 - otimo 2 - bom 3 - regular 4 - ruim\n");
        scanf("%i", &opiniao);

        if (opiniao == 1 || opiniao == 2)
            otimo++;
        else
        {
            ruim++;
        }

        if (sexo == 1)
        {
            masculino++;
        }

        else
        {
            feminino++;
        }

        if (sexo == 1 && opiniao == 1)
        {
            masculinootimo++;
        }
    }
    printf("Percentual otimo e bom: %.f%%\n", otimo * 100 / 40);
    printf("Percentual ruim e regular: %.f%%\n", ruim * 100 / 40);
    printf("Percentual masculino: %i%%\n", masculino * 100 / 40);
    printf("Percentual feminino: %i%%\n", feminino * 100 / 40);
    printf("Otimo masculino: %i\n", masculinootimo);
}
