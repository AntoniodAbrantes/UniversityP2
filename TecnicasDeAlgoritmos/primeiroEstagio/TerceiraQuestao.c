#include <stdio.h>


int main(){

    int vetor[5];
    int i;
    float media=0;

    for(i=0;i<5;i++){

    printf("Informe um valor para a posicao %d do vetor: ",i);
    scanf("%d",&vetor[i]);
}
    for(i=0;i<5;i++){
    media=media+vetor[i];

}  
    media=media/5;
    printf("Media do vetor: %.2f",media);
    
    return 0;
}