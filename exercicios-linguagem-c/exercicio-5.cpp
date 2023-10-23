/*Faça um algoritmo que leia um número e informe se ele é divisível por 10, por 5 ou por 2
ou se não é divisível por nenhum deles.*/
#include <stdio.h>

int main()
{

  int numero;

  printf("digite um número:\n");
  scanf("%d", &numero);

  if (numero % 10 == 0)
  {
    printf("este número é divisível por 10.\n");
  }
  else if (numero % 5 == 0)
  {
    printf("este número é divisível por 5.\n");
  }
  else if (numero % 2 == 0)
  {
    printf("este número é divisível por 2.\n");
  }
  else
  {
    printf("o número não é divisível por 10, 5 ou 2.\n");
  }

  printf("fim");

  return 0;
}