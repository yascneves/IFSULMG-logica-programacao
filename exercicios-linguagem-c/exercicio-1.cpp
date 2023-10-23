/*Faça um algoritmo que leia os valores de A, B, C e verifique se A - B é menor que C. Se sim, mostrar na tela “A - B é menor que C”. Senão, imprimir “A - B não é menor que C”.*/
#include <stdio.h>

int main()
{

  float A, B, C;

  printf("digite o valor de A\n");
  scanf("%f", &A);

  printf("digite o valor de B\n");
  scanf("%f", &B);

  printf("digite o valor de C\n");
  scanf("%f", &C);

  if ((A - B) < C)
  {
    printf("A - B é menor que C\n");
  }
  else
  {
    printf("A - B é maior que C\n");
  }

  return 0;
}