#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, somavalores = 0, vetor[5];
    float media;

    for (i = 0; i < 5; i++){
        printf("\nQual o %i valor?", i+1);
        scanf("%i", &vetor[i]);
        somavalores += vetor[i];
    }

    media = somavalores/5;

    printf("\nSoma dos valores: %i", somavalores);
    printf("\nMédia dos valores: %.2f", media);
    printf("\nValores maiores que a media: ");
        for(i = 0; i < 5; i++){
            if(vetor[i] > media){
                printf("%d | ", vetor[i]);
            }
        }
    printf("\nValores menores que a média: ");
        for(i = 0; i < 5; i++){
            if(vetor[i] < media){
                printf("%d | ", vetor[i]);
            }
        }

    return 0;
}