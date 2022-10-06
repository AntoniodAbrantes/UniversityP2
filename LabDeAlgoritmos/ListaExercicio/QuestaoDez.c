#include <stdlib.h>
#include <stdio.h>


int main() {

     int i;
    float media, acumulador, valor;

    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);

        acumulador += valor;
    }

    media = acumulador / 10;

    printf("\nA media de todos os valores eh: %.2f", media);

    return 0;
}