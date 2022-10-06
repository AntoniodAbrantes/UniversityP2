#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, qtdmenor50 = 0, qtd50a80 = 0, qtdmaior80 = 0;
    float vetor[10], valortotal, media = 0.0;

    for (i = 0; i < 10; i++){
        printf("Digite o valor do %iº produto: ", i+1);
        scanf("%f", &vetor[i]);
        valortotal += vetor[i];
    }

    media = valortotal/10.0;

    for (i = 0; 1 < 10; i++){
        if (vetor[i] < 50){
            qtdmenor50++;
        }else if (vetor[i] < 50){
            qtd50a80++;
        }else{
            qtdmaior80++;
        }
    }

    printf("\nQuantidade de produtos com valor inferior à R$50: %i", qtdmenor50);
    printf("\nQuantidade de produtos com valor entre R$50 e R$80: %i", qtd50a80);
    printf("\nQuantidade de produtos com valor superior à R$80: %i", qtdmaior80);
    printf("\nMédia dos valores dos produtos: %.2f", media);

    return 0;
}