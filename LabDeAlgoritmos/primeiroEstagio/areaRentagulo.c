#include <stdio.h>
#include <stdlib.h>

int main(){

    float base, altura;
    float area;

    printf("Digite o valor da base: ", base);
    scanf("%f", &base);

    printf("Digite o valor da altura: ", altura);
    scanf("%f", &altura);

    area = base*altura;

    printf("A area do retangulo é: %.2f ", area);


    return 0;

}

