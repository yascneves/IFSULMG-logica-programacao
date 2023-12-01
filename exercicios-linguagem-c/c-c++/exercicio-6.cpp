/*Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem
decrescente.*/

#include <stdio.h>

int main()
{
  int valor_1;
  int valor_2;
  int valor_3;

  printf("Digite três números:\n");
  scanf("%d%d%d", &valor_1, &valor_2, &valor_3);

  if (valor_1 > valor_2)
  {
    if (valor_1 > valor_3)
    { // 1 maior
      if (valor_2 > valor_3)
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_1, valor_2, valor_3);
      }
      else
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_1, valor_3, valor_2);
      }
    }
    else
    { // 3 maior
      if (valor_1 > valor_2)
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_3, valor_1, valor_2);
      }
      else
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_3, valor_2, valor_1);
      }
    }
  }
  else
  {
    if (valor_2 > valor_3)
    { // 2 maior
      if (valor_3 > valor_1)
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_2, valor_3, valor_1);
      }
      else
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_2, valor_1, valor_3);
      }
    }
    else
    { // 3 maior
      if (valor_1 > valor_2)
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_3, valor_1, valor_2);
      }
      else
      {
        printf("%d, %d e %d, estão em ordem decrescente.\n", valor_3, valor_2, valor_1);
      }
    }
  }
}