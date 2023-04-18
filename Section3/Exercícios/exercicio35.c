#include <stdio.h> 
#include <math.h>

int main(){
    float a, b, hipotenusa;

    printf("A = "); scanf("%f", &a); printf("B = "); scanf("%f", &b);

    hipotenusa = sqrt(pow(a,2) + pow(b,2));

    printf("H = %.2f", hipotenusa);
}