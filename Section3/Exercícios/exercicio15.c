#include <stdio.h>

int main(){
    float r,g, pi = 3.14;

    printf("R = "); scanf("%f", &r);

    g = r * 180/pi;

    printf("G = %.2f", g);
}