/*Elabore um algoritmo que calcule o preço final de um produto. Considerando o preço
normal de etiqueta, solicite a forma de pagamento e atribua o preço final conforme
apresentado abaixo:
1. À vista em dinheiro ou PIX: 15% de desconto
2. À vista no cartão de crédito ou débito: 10% de desconto
3. Em duas vezes: preço da etiqueta
4. Em três vezes: juros de 10% no preço da etiqueta
5. Caso o usuário digite outra opção, escreve: “Opção Inválida”*/

#include <stdio.h>
#include <string.h>

int main()
{

  char forma_pgto[50];
  int opcao;
  float preco_etiqueta, preco_final, preco_parcela;

  printf("Informe o preço de etiqueta do produto:\n");
  scanf("%f", &preco_etiqueta);

  printf("Selecione uma forma de pagamento a seguir:\n 1. À vista em dinheiro ou PIX\n 2. À vista no cartão de crédito ou débito\n 3. Em duas vezes\n 4. Em três vezes\n");
  scanf("%d", &opcao);

  if (opcao == 1)
  {
    preco_final = preco_etiqueta - (preco_etiqueta * 0.15);
    printf("Você ganhou um desconto de 15%%.\nO valor final do produto é de R$%2.f.\n", preco_final);
  }
  else if (opcao == 2)
  {
    preco_final = preco_etiqueta - (preco_etiqueta * 0.10);
    printf("Você ganhou um desconto de 10%%.\nO valor final do produto é de R$%2.f.\n", preco_final);
  }
  else if (opcao == 3)
  {
    preco_final = preco_etiqueta;
    printf("Você pode parcelar em duas vezes.\nO valor final do produto é de R$%2.f.\n", preco_final);
  }
  else if (opcao == 4)
  {
    preco_final = preco_etiqueta + (preco_etiqueta * 0.10);
    preco_parcela = preco_final / 3;
    printf("Você pode parcelar em três vezes e terá juros de 10%% do valor do produto.\nO valor de cada parcela é de R$%2.f.\nO valor final do produto é de R$%2.f.\n", preco_parcela, preco_final);
  }
  else
  {
    printf("Opção inválida.\n");
  }
  printf("fim");
  return 0;
}