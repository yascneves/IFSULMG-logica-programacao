#include <stdio.h>

int main()
{
  int x, a, b;

  printf("Digite dois numeros inteiros:\n");
  scanf("%d%d", &a, &b);

  x = (a + b);

  if (x > 10)
  {
    printf("A condicao foi satisfeita, congrats! O valor e de: %d", x);
  }
  else if (x<5)
  {
    printf("A condição foi parcialmente satisfeita.\n");
  } 
  else
  {
    printf("A condição não foi satisfeita \n");
    printf("O programa sera encerrado.\n");
  }

  return 0;
}