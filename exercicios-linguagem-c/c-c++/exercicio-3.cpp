/*Faça um algoritmo que leia dois valores inteiros A e B.
Se A e B forem iguais, os dois deverão ser somados e o resultado armazenado em uma variável C.
Caso contrário, multiplique A por B e guarde o valor na variável C.
Mostre o resultado em tela do valor armazenado em C.*/
#include <stdio.h>

int main()
{

  int A, B, C;

  printf("digite o valor A\n");
  scanf("%d", &A);

  printf("digite o valor B\n");
  scanf("%d", &B);

  if (A == B)
  {
    C = (A + B);
    printf("O valor de C é %d\n", C);
  }
  else
  {
    C = (A * B);
    printf("O valor de C é %d\n", C);
  }

  printf("fim do programa");

  return 0;
}