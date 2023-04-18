#include <stdio.h>

int main(){
    int num, antecessor, sucessor;

    printf("Digite um valor inteiro: "); scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("Antecessor = %d     Sucessor = %d", antecessor, sucessor);
}