#include <stdio.h>

int main(){
    float preco, desconto = 12, total;

    printf("Qual o preco do produto ?\n");
    scanf("%f", &preco);

    total = (preco * desconto) / 100;

    preco = preco - total;

    printf("Total = %.2f", preco);
}