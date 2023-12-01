/*Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem
decrescente.*/

#include <stdio.h>

int main()
{
  int valor_1;
  int valor_2;
  int valor_3;

  printf("Digite três números:\n");
  scanf("%d%d%d", &valor_1, &valor_2, &valor_3);

  if (valor_1 > valor_2) {
    if (valor_1 > valor_3) {
      printf("%d é maior\n", valor_1);// 1 maior
      if (valor_2 > valor_3) {
        printf("%d segundo maior\n", valor_2);
        printf("%d terceiro maior\n", valor_3);
      } else {
        printf("%d segundo maior\n", valor_3);
        printf("%d terceiro maior\n", valor_2);
      }
    } else {//3 maior
      printf("%d é maior\n", valor_3);
      if (valor_1 > valor_2) {
        printf("%d segundo maior\n", valor_1);
        printf("%d terceiro maior\n", valor_2);
      } else {
        printf("%d segundo maior\n", valor_2);
        printf("%d terceiro maior\n", valor_1);
      }
    }
  } else {
    if (valor_2 > valor_3) { // 2 é o maior
      printf("%d é maior\n", valor_2);
      if (valor_3 > valor_1) {
        printf("%d segundo maior\n", valor_3);
        printf("%d", valor_1);
      } else {
        printf("%d segundo maior\n", valor_1);
        printf("%d terceiro maior\n", valor_3);
      }
    } else {
      //3 é maior
      printf("%d é maior\n", valor_3);
      if (valor_2 > valor_1) {
        printf("%d segundo maior\n", valor_2);
        printf("%d", valor_1);
      } else {
        printf("%d segundo maior\n", valor_1);
        printf("%d terceiro maior\n", valor_2);
      }
    }
  }
}