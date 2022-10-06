#include <stdio.h>
#include <stdlib.h>

int main(){

    float apple, total;

    printf("Quantas maçãs deseja comprar? ");
    scanf("%f", &apple);

    if(apple < 12){
       total = apple * 1.30;
    }
    else if(apple > 12){
        total = apple * 1.00;
    };

    printf("O valor total fica: %f",total);

    return 0;

}