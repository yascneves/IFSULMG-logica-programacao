// Uma papelaria possui um controle de vendas feito no Excel e eles precisam de um
// sistema em Linguagem C. Para isso, utilize a tabela abaixo como referência:
// Produto Código Preço
// Lápis 1 1,00
// Borracha 2 1,50
// Caneta 3 2,20
// Caderno 4 12,90
// O sistema deve solicitar o código do produto e a quantidade de cada item. A
// cada iteração, deve-se imprimir o preço parcial. O processamento deve ocorrer até
// que o usuário digite o código -1. Ao final, deve ser impresso o preço total da compra.
#include <stdio.h>

int main()
{

  int contador = 1000;

  while (contador > 0)
  {
    printf("Tá calor ne! %d\n", contador);
    contador--;
  }
  return 0;
}