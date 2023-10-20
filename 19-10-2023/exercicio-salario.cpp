// Efetuar o cálculo do reajuste de salário de um funcionário. Considere que ele deve ser de 15% caso o salário seja menor que 500. Se for maior ou igual a 500, seu reajuste será de 10%//
#include <stdio.h>

int main()
{
  float salario, novosalario;

  printf("Digite o salário do funcionário:\n");
  scanf("%f", &salario);

  if (salario >= 500)
  {
    novosalario = (salario + (salario * 0.10));
    printf("Seu salário terá um aumento de 10 porcento e será reajustado para %2.f", novosalario);
  }
  else if (salario < 500 && salario >= 300)
  {
    novosalario = (salario + (salario * 0.15));
    printf("Seu salário terá um aumento de 15 porcento e será reajustado para %2.f", novosalario);
  }
  else
  {
    printf("esse salario nao ecziste");
  }
}
