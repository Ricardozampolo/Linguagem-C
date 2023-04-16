#include <stdio.h>

float conversao(float celsius);

int main(){
    float celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f",&celsius);

    float temp = celsius;
    float resultado = conversao(celsius);

    printf("O valor de %.2f graus celsius para fahrenheit e = %.2f", temp,resultado);
}

float conversao(float celsius){
    return (celsius * 9 / 5) + 32;
}