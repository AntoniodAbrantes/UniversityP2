#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[6], i;

    for (i = 0; i < 6; i++){
        printf("Digite o %i valor: ", i+1);
        scanf("%i", &vetor[i]);
    }

    printf("Valores positivos dentro do vetor: ");
    for (i = 0; i < 6; i++){
        if ( vetor[i] > 0){
            printf("%i | ", vetor[i]);
        }
    }

return 0;
}