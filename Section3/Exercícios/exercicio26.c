#include <stdio.h>

int main(){
    float h, m;

    printf("M = "); scanf("%f", &m);

    h = m * 0.0001;

    printf("H = %.4f", h);
}