#include <stdio.h>

int main()
{
  int opcao_servico, opcao_cartao;
  int quantidade;
  int forma_pgto;
  float valor_total, dinheiro, troco, pix, debito, credito;

  printf("Digite uma opção:\n 1. Impressão.\n 2. Arte gráfica.\n");
  scanf("%d", &opcao_servico);
  while (opcao_servico > 2 || opcao_servico < 1)
  {
    printf("Opção Inválida. Escolha novamente:\n");
    scanf("%d", &opcao_servico);
  }

  printf("Quantidade:\n");
  scanf("%d", &quantidade);

  if (opcao_servico == 1)
  {
    valor_total = quantidade * 1.00;
  }
  else if (opcao_servico == 2)
  {
    valor_total = quantidade * 50.00;
  }

  printf("Sua compra deu o total de R$%.2f.\nEscolha a forma de pagamento\n 1. Dinheiro\n 2. Pix\n 3. Cartão de Crédito\n 4. Cartão de Débito\n", valor_total);
  scanf("%d", &forma_pgto);

  while (forma_pgto < 1 || forma_pgto > 4)
  {
    printf("Opção inválida. Escolha novamente:\n");
    scanf("%d", &forma_pgto);
  }

  if (forma_pgto == 1)
  {
    printf("Troco para quanto?");
    scanf("%f", &dinheiro);
    troco = dinheiro - valor_total;
    printf("O troco será no valor de R$%.2f.\n", troco);
  }
  else if (forma_pgto == 2)
  {
    printf("CNPJ: 01.234.567/0001-23\n");
  }
  else if (forma_pgto == 3)
  {
    printf("Escolha uma opção:\n 1. À vista\n 2. Parcelado\n");
    scanf("%d", &opcao_cartao);
    if (opcao_cartao == 1)
    {
      printf("Seu pedido no valor de R$%.2f será pago em cartão - crédito à vista\n", valor_total);
    }
    else if (opcao_cartao == 2)
    {
      printf("Seu pedido no valor de R$%.2f será pago em cartão - crédito parcelado\n", valor_total);
    }
    else
    {
      printf("Opção inválida.\n");
    }
  }
  else if (forma_pgto == 4)
  {
    printf("Seu pedido no valor de R$%.2f será pago em cartão - débito à vista\n", valor_total);
  }

  printf("fim.");
  return 0;
}
