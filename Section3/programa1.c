//Aula sobre variáveis

//Serve para trabalhar com entrada e saída padrão: Input(teclado) output(monitor)
#include <stdio.h>

int main(){
    //Declaração de variáveis
    int idade;

    //Programa
    printf("Qual a sua idade ?\n");

    scanf("%d", &idade);//Essa função precisa de informações do tipo de dado e a variável que armazenará o valor

    printf("Minha idade e %d anos", idade);
}