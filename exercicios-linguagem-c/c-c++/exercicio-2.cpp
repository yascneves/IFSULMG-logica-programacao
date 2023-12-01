// Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.
#include <stdio.h>

int main()
{

  int n;

  printf("digite um número qualquer:\n");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("o número %d é par\n", n);
  }
  else
  {
    printf("o número %d é ímpar\n", n);
  }

  printf("fim do programa");

  return 0;
}