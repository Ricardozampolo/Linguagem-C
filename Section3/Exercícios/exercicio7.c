// #include <stdio.h>

// float conversao(float fahrenheit);

// int main(){
//     float fahrenheit;

//     printf("Digite a temperatura em graus Fahrenheit: ");
//     scanf("%f", &fahrenheit);

//     float armazena = fahrenheit;
//     conversao(fahrenheit);

//     printf("%.2f graus fahrenheit, equivale a %.2f graus celsius", armazena, fahrenheit);
// }

// float conversao(float fahrenheit){
//     return (fahrenheit - 32) * 5/9;
// }

#include <stdio.h>

int main(){
    float c, f;

    printf("F = "); scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("C = %.2f", c);
}