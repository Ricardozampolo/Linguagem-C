#include <stdio.h>

int soma(int valor1,int valor2, int valor3);

int main(){
    int num1, num2, num3;

    printf("Digite um valor inteiros tres vezes: \n");

    scanf("%d %d %d",&num1, &num2, &num3);

    printf("Os valores digitados sao: %d %d %d\n", num1,num2,num3);

    int resultado = soma(num1,num2,num3);
    printf("A soma dos valores e = %d", resultado);
}

int soma(int valor1,int valor2, int valor3){
    int resultado = valor1 + valor2 + valor3;
    return resultado;
}