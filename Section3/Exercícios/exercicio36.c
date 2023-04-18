#include <stdio.h>
#include <math.h>

int main(){
    float altura, raio, pi = 3.141592, volume;

    printf("Altura = "); scanf("%f", &altura);
    printf("Raio = "); scanf("%f", &raio);

    volume = pi * (pow(raio,2)) * altura;

    printf("V = %.2f", volume);
}