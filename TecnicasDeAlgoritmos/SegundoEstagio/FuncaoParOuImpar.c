#include <stdio.h>
#include <stdlib.h>

int ParImpar(int n1){
    if(n1 % 2 == 0){
        return printf("O numero é PAR");
    }
    else{
        return printf("O numero é IMPAR");
    }
}

int main(){
    
    int n1;

    printf("Digite um número para saber se ele é par ou impar: ");
    scanf("%i", &n1);

    ParImpar(n1);

    return 0;
}