#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite um número inteiro:\n");
    scanf("%i", &num);

    if( num > 0 ){
        for(int i = 0; i < num; i++){
            printf("\n %i", i + 1);
        }
    }
    else{
        printf("Digite um número maior que zero");
    }
    return 0;
}