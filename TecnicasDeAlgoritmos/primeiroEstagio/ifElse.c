#include <stdio.h>

int main(){

int idade;
printf("Para prosseguir, qual a sua idade:", idade);
scanf("%d",&idade);

if(idade<16){
printf("Aqui está bob esponja, para você assistir");
}
else {
printf("Aqui está stranger things, para você assistir");
}

return 0;
}