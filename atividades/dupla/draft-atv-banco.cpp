// No trabalho prático, vocês deverão simular as operações realizadas em um caixa eletrônico. Para isso, o sistema deve gerar um saldo, de forma aleatória, para o cliente, e novas operações devem ser ofertadas a ele. Operações como saque, depósito, empréstimo, aplicações em fundo e outras podem ser disponibilizadas. Em uma operação de saque, por exemplo, deve-se solicitar ao cliente o valor de saque, que deve ser subtraído do valor que ele já possui na conta. Deve-se também dar a opção do cliente de finalizar o programa. Ao final, deve ser mostrado o saldo final e uma mensagem de despedida. Deve-se também gerar um relatório contendo as funcionalidades disponíveis no programa.

// O trabalho deve ser realizado em grupos de até 4 pessoas. A apresentação ocorrerá no mesmo dia da entrega e deve durar entre 15 e 20 minutos.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //biblioteca para funcionar o time NULL

int main()
{
  srand(time(NULL)); // time(NULL) return the number (after conversion) of seconds since about midnight 1970-01-01. That number changes every second, so using that number to "select a book" pretty much guarantees a new sequence of "random" numbers every time your program runs.
  float saldo = rand();
  int operacao = 0;

  while (operacao != 5) // vai repetir enquanto for diferente de 5
  {
    printf("\nOlá! Você tem R$%2.f de saldo em sua conta\n\nEscolha uma operação:\n"
           "1. Saque\n"
           "2. Depósito\n"
           "3. Empréstimo\n"
           "4. Investimentos\n"
           "4. Consultar Saldo\n"
           "5. Finalizar\n"
           "Opção: ",
           saldo);
    scanf("%d", &operacao);

    if (operacao == 1)
    {
      float valorSaque;
      printf("Informe o valor do saque: R$");
      scanf("%f", &valorSaque);

      if (valorSaque > saldo)
      {
        printf("Saldo indisponível.\n"
               "Voltando ao inicío\n\n");
      }
      else
      {
        saldo = saldo - valorSaque;
        printf("Saque aprovado.\n\n"
               "Processando sua solicitação de saque de R$%2.f\n",
               valorSaque);
      }
    }

    if (operacao == 2)
    {
      float valorDeposito;
      printf("Informe o valor do depósito: R$");
      scanf("%f", &valorDeposito);

      if (valorDeposito <= 0)
      {
        printf("Valor inválido.\n"
               "Retornando ao menu inicial\n");
      }
      else
      {
        saldo = saldo + valorDeposito;
        printf("Depósito efetuado. Seu novo saldo é de R$%2.f", saldo);
      }
    }
  }
  return 0;
}
