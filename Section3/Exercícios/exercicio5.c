#include <stdio.h>

float quintaParte(float num);

int main(){
    float num;

    printf("Digite um numero real: \n");
    scanf("%f",&num);

    float guarda = num;
    float resultado = quintaParte(num);
    printf("A quinta parte de %.2f = %.2f", guarda,resultado);
}

float quintaParte(float num){
    float valor = num / 5;
    return valor;
}