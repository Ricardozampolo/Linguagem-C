#include <stdio.h>

int main(){
    float moeda, dolar = 4.93, valor;

    printf("Digite um valor real: \n");
    scanf("%f", &moeda);

    valor = moeda / dolar;

    printf("%.2f reais = %.2f dolares",moeda, valor);
}