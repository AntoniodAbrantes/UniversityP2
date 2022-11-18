#include <stdio.h>
#include <stdlib.h>

float area(float base, float altura){
    return base*altura;
}

int main(){
    float base, altura, resultado;

    printf("Digite a base do triangulo:");
    scanf("%f", &base);
    printf("Digite a altura do triangulo:");
    scanf("%f", &altura);

    resultado = area(base, altura);

    printf("A área do triangulo é %f", resultado);

    return 0;
}
