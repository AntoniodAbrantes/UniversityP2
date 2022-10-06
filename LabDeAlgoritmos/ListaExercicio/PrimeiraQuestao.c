#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int antecessor;

    printf("Escreva um número e veja seu antecessor: ");
    scanf("%i", &num);

    antecessor = num -1;

    printf("O seu antecessor é:%i", antecessor);

    return 0;


}