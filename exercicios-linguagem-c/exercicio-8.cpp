/*Escreva um algoritmo que leia as 3 notas obtidas por um aluno e calcule a média, usando
a fórmula: Média = (nota1 + nota 2 + nota 3)/3. Atribua o conceito obtido, conforme
apresentado abaixo:
1) ‘Aprovado', se a média for maior ou igual a 6
2) ‘Recuperação’, se média for maior ou igual a quatro e menor que 6. Nesse caso, o
programa deve solicitar a nota da prova de recuperação. Se a nota for maior ou igual
a 6, o aluno foi aprovado. Caso contrário, reprovado
3) Nos demais casos, o aluno foi reprovado.*/
#include <stdio.h>

int main()
{
  int nota_1;
  int nota_2;
  int nota_3;
  int nota_rec;
  int media;

  printf("Digite a nota 1:\n");
  scanf("%d", &nota_1);

  printf("Digite a nota 2:\n");
  scanf("%d", &nota_2);

  printf("Digite a nota 3:\n");
  scanf("%d", &nota_3);

  media = (nota_1 + nota_2 + nota_3) / 3;

  if (media >= 6)
  {
    printf("Sua média é %d. Aprovado!\n", media);
  }
  else if (media >= 4)
  {
    printf("Sua média é %d. Recuperação! Digite a nota da recuperação:\n", media);
    scanf("%d", &nota_rec);
    if (nota_rec >= 6)
    {
      printf("Sua nota é %d. Aprovadado!\n", nota_rec);
    }
    else
    {
      printf("Sua média é %d. Reprovado!\n", media);
    }
  }
  else
  {
    printf("Sua média é %d. Reprovado!\n", media);
  }
  printf("fim");
  return 0;
}