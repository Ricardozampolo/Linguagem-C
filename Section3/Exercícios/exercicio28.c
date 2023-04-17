#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Digite tres valores inteiros: "); scanf("%f %f %f", &num1, &num2, &num3);

    num1 = num1 * num1;
    num2 = num2 * num2;
    num3 = num3 * num3;

    float soma = num1 + num2 + num3;

    printf("Soma = %.2f", soma);

    return 0;
}