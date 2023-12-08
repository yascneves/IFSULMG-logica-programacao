// // Exercício 2) Faça um sistema de cadastro de funcionários, que contém os seguintes campos. Use for como estrutura de repetição:
// 1) nome (char)
// 2) endereco (char)
// 3) telefone (inteiro)
// 4) data de nascimento (char)
// 5) cpf (inteiro)
#include <stdio.h>
#include <locale.h>

char nome[50];
char endereco[100];
char telefone[20];
char dataNascimento[20];
char CPF[20];

void cadastraFuncionario()
{
  printf("\nNome:");
  fgets(nome, 50, stdin);
  printf("\nEndereço:");
  fgets(endereco, 100, stdin);
  printf("\nTelefone:");
  fgets(telefone, 20, stdin);
  printf("\nData de nascimento:");
  fgets(dataNascimento, 20, stdin);
  printf("\nCPF:");
  fgets(CPF, 20, stdin);
  printf("\nNome: %s", nome);
  printf("\nEndereco: %s", endereco);
  printf("\nTelefone:%s", telefone);
  printf("\nData de Nascimento:%s", dataNascimento);
  printf("\nCPF:%s", CPF);
}

int main()
{
  int i;
  for (i = 0; i < 1; i++)
  {
    cadastraFuncionario();
  }

  // // int 1
  // while (1<10){
  //   cadastraFuncionario();
  //   1++;
  // }
}