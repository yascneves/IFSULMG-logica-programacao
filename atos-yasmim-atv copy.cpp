// No trabalho prático, vocês deverão simular as operações realizadas em um caixa eletrônico. Para isso, o sistema deve gerar um saldo, de forma aleatória, para o cliente, e novas operações devem ser ofertadas a ele. Operações como saque, depósito, empréstimo, aplicações em fundo e outras podem ser disponibilizadas. Em uma operação de saque, por exemplo, deve-se solicitar ao cliente o valor de saque, que deve ser subtraído do valor que ele já possui na conta. Deve-se também dar a opção do cliente de finalizar o programa. Ao final, deve ser mostrado o saldo final e uma mensagem de despedida. Deve-se também gerar um relatório contendo as funcionalidades disponíveis no programa.

// O trabalho deve ser realizado em grupos de até 4 pessoas. A apresentação ocorrerá no mesmo dia da entrega e deve durar entre 15 e 20 minutos.
#include <stdio.h>
#include <stdlib.h>

int main()
{

  float saldo = rand();
  int operacao = 0;

  while (operacao != 5)
  {
    printf("Escolha uma operação:\n"
           "1. Saque\n"
           "2. Depósito\n"
           "3. Empréstimo\n"
           "4. Investimentos\n"
           "4. Consultar Saldo\n"
           "5. Finalizar\n"
           "Opção: ");
    scanf("%d", &operacao);

    if (operacao == 1)
    {
      float valorSaque;
      printf("Informe o valor do saque: R$");
      scanf("%f", &valorSaque);

      if (valorSaque > 0 && valorSaque <= saldo)
      {
        saldo -= valorSaque;
        printf("Saque de R$%.2f realizado com sucesso!\n", valorSaque);
      }
      else
      {
        printf("Operação inválida. Saldo insuficiente ou valor de saque inválido.\n");
      }
    }
    else if (operacao == 2)
    {
      float valorDeposito;
      printf("Informe o valor do depósito: R$");
      scanf("%f", &valorDeposito);

      if (valorDeposito > 0)
      {
        saldo += valorDeposito;
        printf("Depósito de R$%.2f realizado com sucesso!\n", valorDeposito);
      }
      else
      {
        printf("Operação inválida. Valor de depósito inválido.\n");
      }
    }
    else if (operacao == 3)
    {
      printf("Seu saldo atual é: R$%.2f\n", saldo);
    }
    else if (operacao == 4)
    {
      printf("Programa finalizado. Obrigado!\n");
    }
    else
    {
      printf("Opção inválida. Tente novamente.\n");
    }
  }

  return 0;
}
