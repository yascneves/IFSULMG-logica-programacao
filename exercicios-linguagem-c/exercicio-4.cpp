/*Encontrar a raiz quadrada de um número caso ele seja positivo e seu dobro caso seja
negativo. Imprima na tela o resultado dessa operação.*/
#include <stdio.h>
#include <math.h>

int main()
{

  int n;
  double r;

  printf("digite um número positivo ou negativo\n");
  scanf("%d", &n);

  if (n >= 0)
  {
    r = sqrt(n);
    printf("a raiz quadrada de %f é %lf.\n", n, r); /*coloquei %lf (long float) porque raiz quadrada retorna um valor do tipo double (número real (não inteiro))*/
  }
  else
  {
    r = (double)(2 * n);
    printf("o dobro de %d é %0.f.\n", n, r); /*coloquei %0.f porque o printf não consegue converter float para %d (numero inteiro). O '0' é a quantidade de casas decimais*/
  }

  printf("fim do programa");

  return 0;
}