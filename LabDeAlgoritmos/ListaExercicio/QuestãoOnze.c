#include <stdio.h>
int main(){
    int numero;
    float loop = 0;
    float acumulador = 0;
    do{
        printf("Deseja tirar de numeros pares, para parar digite 0 \n");
        printf("Numero: ");
        scanf("%d", &numero);
        if(numero % 2 == 0 ){
            acumulador += numero;
            loop++;
        }else{
            printf("Numero nao computado, pois nao eh par\n");
        }
    }while(numero != 0);
    printf("A media dos numeros pares eh: %.2f", acumulador / loop);
    return 0;
}