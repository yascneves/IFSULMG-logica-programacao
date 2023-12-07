#include <stdio.h>

void mostrarNumeros(float n1, float n2)
{
  printf("Os valores utilizados para calcular a média foram: %2.f e %2.f\n", n1, n2);
}

void calculaMedia(float n1, float n2) // elemento que seta um procedimento. Esse procedimento (função) pode ser chamado no int main
{
  float media;
  media = (n1 + n2) / 2;
  printf("A média é: %2.f\n", media);
  mostrarNumeros(n1, n2);
}

// float é um tipo de return, assim como void também é
float calculaMediaa(float n1, float n2) // elemento que seta um procedimento. Esse procedimento (função) pode ser chamado no int main
{
  float media;
  media = (n1 + n2) / 2;
  return media;
}

int main()
{
  float n1, n2, media;
  printf("Digite dois valores para calcular a média\n");
  scanf("%f%f", &n1, &n2);
  media = calculaMediaa(n1, n2);
  return 0;
}