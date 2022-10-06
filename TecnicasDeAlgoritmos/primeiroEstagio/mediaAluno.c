#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, media;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    if (media < 4){
        printf("Reprovado!");
    }
    else if (media < 7.0){
        printf("Prova final");
    }
    else {
        printf("Aprovado");
    }

    return 0;
}