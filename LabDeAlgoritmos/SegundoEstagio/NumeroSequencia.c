#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, contaMaiorQueMedia = 0;
    float numeros[10]={0,0,0,0,0,0,0,0,0,0};
    float soma = 0;
    float media;

    for(i=0; i<10; i++){
        printf("---------DIGITE UM VALOR-----------(_%i_):", i+1);
        scanf("%f", &numeros[i]);
        for(j=0; j<i; j++){
            if (numeros[i] == numeros[j]){
                printf("Número Repetido!\n");
                i--;
            }
        }
        soma+=numeros[i];
    }

    media = soma/10;

    for(i = 0; i <10; i++){
        printf("%.1f", numeros[i]);
        if(numeros[i]>media){
            contaMaiorQueMedia++;
        }
    }
    printf("\nHa %d numeros acima da media", contaMaiorQueMedia);

    return 0;
}