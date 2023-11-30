// 2. Faça um programa, utilizando while, que mostre na tela de 0 até N, em que N é o limite inserido pelo usuário.
#include <stdio.h>

int main()
{
  int n, contador = 0;

  printf("Digite o numero limite:\n");
  scanf("%d", &n);

  while (contador <= n)
  {
    printf("%d\n", contador);
    contador = contador + 1;
  }
  return 0;
}