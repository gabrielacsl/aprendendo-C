#include <stdio.h>
#include <math.h>

main()
{
    int voto, a = 0, b = 0, nulo = 0, branco = 0, total = 0;
    printf("Candidato A = 1\n");
    printf("Candidato B = 2\n");
    printf("Nulo = 3\n");
    printf("Branco = 4\n");

    while (voto != 0)
    {
        printf("Voto: ");
        scanf("%i", &voto);

        if (voto == 1)
        {
            a++;
        }
        if (voto == 2)
        {
            b++;
        }
        if (voto == 3)
        {
            nulo++;
        }
        if (voto == 4)
        {
            branco++;
        }
        total = a + b + nulo + branco;
    }
    printf("Porcentagem de votos do Candidato 1: %.f%%\n", (float)a / total * 100);
    printf("Porcentagem de votos do Candidato 2: %.f%%\n", (float)b / total * 100);
    printf("Porcentagem de votos nulos: %.f%%\n", (float)nulo / total * 100);
    printf("Porcentagem de votos brancos: %.f%%\n", (float)branco / total * 100);
}