// Construa um programa em Linguagem C para que, dadas dez notas, faça a média e retorne:
// 1) Aprovado, se média maior ou igual a 6
// 2) Recuperação, se média maior ou igual a 4 e menor que 6
// 3) Reprovado, caso contrário
// Em caso de recuperação, solicite a nota da recuperação. Se o aluno na prova de
// recuperação obteve nota maior ou igual a 6, ele está aprovado. Caso contrário, ele foi
// reprovado.
#include <stdio.h>

int main(){
  
  float nota, media;
  int qtdNotas = 10;

  while(qtdNotas != 0){
    printf("Digite a nota:\n");
    scanf("%f", &nota);
     qtdNotas = qtdNotas - 1;
  }

  return 0;
}