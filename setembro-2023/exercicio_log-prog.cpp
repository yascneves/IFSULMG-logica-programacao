/**programa utilizado para calcular a media de tres numeros, que são informados pelo usuario**/
#include <stdio.h>
#include <cstdlib>

int main()
{
       float x1, x2, x3, media;
       printf("digite as tres notas:");
       scanf("%f%f%f", &x1, &x2, &x3);
       media = (x1 + x2 + x3) / 3;
       printf("O resultado da media e: %f \n");
       system("pause");
       return 0;
}
