#include <stdio.h>

int main(){
    float g,r,pi = 3.14;

    printf("G = "); scanf("%f", &g);

    r = g * pi / 180;

    printf("R = %.4f", r);
}