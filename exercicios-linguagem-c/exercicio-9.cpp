/*Crie um programa que leia a idade de uma pessoa e informe a sua classe eleitoral:
1) não eleitor (abaixo de 16 anos)
2) eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
3) eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).*/
#include <stdio.h>

int main()
{
  int idade;

  printf("Insira a idade:\n");
  scanf("%d", &idade);

  if ((idade >= 16 && idade < 18) || idade >= 65)
  {
    printf("Eleitor facultativo.\n");
  }
  else if (idade >= 18)
  {
    printf("Eleitor Obrigatório.\n");
  }
  else
  {
    printf("Não eleitor.\n");
  }
  printf("fim");
  return 0;
}