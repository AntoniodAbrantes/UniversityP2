#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float pi = 3.14; //inicialização (declaração + atribuição)
    float raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = pi* (raio*raio);

    printf("Area: %f ", area);
    

    return 0;
}