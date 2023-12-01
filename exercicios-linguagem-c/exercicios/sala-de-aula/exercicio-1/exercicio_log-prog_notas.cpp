#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("digite as tres notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media=(n1+n2+n3)/3;
    printf("a media e: %3.f", media);
    return 0;
}
