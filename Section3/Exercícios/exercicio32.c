#include <stdio.h>
#include <math.h>

int main(){
    int num, triploSucessor, dobroAntecessor;

    printf("Digite um numero inteiro: "); scanf("%d", &num);

    triploSucessor = (pow(num,3)) + 1; //printf("%d\n", triploSucessor);

    dobroAntecessor = (pow(num,2)) - 1; //printf("%d\n", dobroAntecessor);

    int soma = triploSucessor + dobroAntecessor;
    printf("A soma do Antecessor do dobro e o triplo do sucessor = %d", soma);
}