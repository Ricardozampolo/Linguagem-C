#include <Stdio.h>

float quadrado(float valor);

int main(){
    float altura;
    
    printf("Digite a sua altura: \n");
    scanf("%f",&altura);
    
    float resultado = quadrado(altura);
    printf("O valor ao quadrado e = %.4f", resultado);
}

float quadrado(float valor){
    float potencia = valor * valor;
    return potencia;
}
