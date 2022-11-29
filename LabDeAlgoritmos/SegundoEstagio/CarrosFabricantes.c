#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char fabricante[50];
    char modelo[50];
    int ano;
} carros;


int main(){
    carros carros[3];
    int i,maior, menor, indiceMaiorAno, indiceMenorAno;

    for(i = 0; i < 3; i++)
       { printf("Digite o Fabricante:");
        fgets(carros[i].fabricante,50,stdin);
        carros[i].fabricante[strlen(carros[i].fabricante) -1 ] = '\0';

        printf("Digite o Modelo:");
        fgets(carros[i].modelo,50,stdin);
        carros[i].modelo[strlen(carros[i].modelo) -1 ] = '\0';

        printf("Digite o Ano:");
        scanf("%d",&carros[i].ano);

        getchar();

        if(i == 0){
            maior = carros[0].ano;
            menor = carros[0].ano;
        }
        if(carros[i].ano > maior){
            maior = carros[i].ano;
            indiceMaiorAno = i;

        }
         if(carros[i].ano > maior){
            menor = carros[i].ano;
            indiceMenorAno = i;
        }

            
        }

    return 0;
}