#include <stdio.h>

int main(){
    float n1,n2,n3,n4;

    printf("Digite o valor das suas notas de 0 a 10: \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float media = (n1 + n2 + n3 + n4) / 4;
    printf("Media = %.2f", media);
}