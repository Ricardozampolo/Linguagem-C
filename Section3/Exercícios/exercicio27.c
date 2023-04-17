#include <stdio.h>

int main(){
    float h, m;

    printf("H = "); scanf("%f", &h);

    m = h * 10000;

    printf("M = %.2f",m);
}