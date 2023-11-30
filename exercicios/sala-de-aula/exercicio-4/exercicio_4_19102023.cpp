#include <stdio.h>

int main()
{
  float total_compras;
  int idade;
  long int cpf;

  printf("digite a idade:\n");
  scanf("%i", &idade);

  printf("digite o cpf:\n");
  scanf("%i", &cpf);

  printf("digite o total em compras:\n");
  scanf("%f", &total_compras);

  printf("a idade é: %i.\no cpf é: %i.\no total em compras é %2.f", idade, cpf, total_compras);

  return 0;
}