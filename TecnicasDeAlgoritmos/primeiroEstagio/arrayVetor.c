#include <stdio.h>
#include <stdlib.h>

int main(){

    int notas [5];
    int i;

    for (i = 1; i < 5; i++){
        printf("Digite a nota do aluno %d:",i);
        scanf("%d",&notas[i]);
    }

    return 0;
}