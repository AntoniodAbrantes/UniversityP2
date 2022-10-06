#include <stdio.h>
#include <stdlib.h>

int main(){

    float tc, tf;

    printf("Digite a temperatura em Celsius para ver Fahrenheit: ");
    scanf("%f", &tc);

    tf = tc*1.8+32;

    printf("A temperatura em Fahrenheit é: %.2f", tf);

    return 0;

}