#include <stdio.h>
#include <math.h>

int main(){
    float raio, area, pi = 3.141592;

    printf("Raio = "); scanf("%f", &raio);

    area = pi * (pow(raio,2));

    printf("A = %.2f", area);
}