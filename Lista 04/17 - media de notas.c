#include "stdio.h"

main()
{
   for (int i = 0; i < 50; i++)
   {
      float media, soma = 0;

      for (int j = 0; j < 3; j++)
      {
         int nota;
         printf("Nota prova 1: ", j + 1);
         scanf("%i", &nota);

         soma += nota;
      }
    media = soma / 3;
      printf("Media final do aluno: %.2f\n", media);
   }
}