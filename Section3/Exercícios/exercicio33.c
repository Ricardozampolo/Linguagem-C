#include <stdio.h>

int main(){
    float lado, area;

    printf("Lado do quadrado = "); scanf("%f", &lado);

    area = lado * lado;

    printf("A = %.2f", area);
}