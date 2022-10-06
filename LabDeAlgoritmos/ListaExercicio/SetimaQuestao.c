 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    float IndiceDePoluicao;

    printf("Digite o indice de poluição que foi calculado");
    scanf("%f", &IndiceDePoluicao);

    if (IndiceDePoluicao <= 0.25){
        printf("\n Indice de poluição Aceitável");
    }
    else if(IndiceDePoluicao < 0.04){
        printf("\n Indice de poluição Alto, as industrias do primeiro grupo deve suspender as atividades!");
    }
    else if(IndiceDePoluicao < 0.05){
        printf("\n Indice de poluição muito Alto, as industrias do primeiro e segundo grupos devem suspender suas atividades!");
    }
    else{
        printf("\n Indice SUPER ALTO, acima de 0,5!! Industrias do primeiro, segundo e terceiro grupo devem suspender suas atividades");
    }

    return 0;
    
 }