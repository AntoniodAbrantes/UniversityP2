#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[15], i, qtdsim = 0, qtdnao = 0;

    for(i = 0; i < 15; i++){
        printf("\nVocê gosta de beterraba? ( 1- SIM  ou  2-NÃO) ");
        scanf("%i", &vetor[i]);
    }
    for(i = 0; i < 15; i++){
        if (vetor[i] == 1){
            qtdsim++;
        }else{
            qtdnao++;
        }
    }

    printf("\nA quantidade de pessoas que responderam SIM foi: %i", qtdsim);
    printf("\nA quantidade de pessoas que responderam NÃO foi: %i", qtdnao);

    return 0;
}