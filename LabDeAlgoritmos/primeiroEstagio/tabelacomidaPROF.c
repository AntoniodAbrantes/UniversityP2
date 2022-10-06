#include <stdio.h>



int main(){

float valorTotal = 0.0;

char resposta = 's';

int codigo,qtd,valorParcial,i;

int quantidades[6] = {0,0,0,0,0,0};

float valoresParciais[6] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};





while(resposta == 's'){

printf("Digite o codigo do produto: ");

scanf("%d",&codigo);

printf("Digite a quantidade: ");

scanf("%d",&qtd);



switch(codigo){

case 100:

valoresParciais[0] += qtd * 1.20; //quanto vou pagar de cachorro q

quantidades[0] += qtd; //qtds de cachorro q

valorTotal += valoresParciais[0];

break;

case 101:

valoresParciais[1] += qtd * 1.30; //quanto vou pagar de bauru s

quantidades[1] += qtd; //qtds de bauru s

valorTotal += valoresParciais[1];

break;

case 102:

valoresParciais[2] += qtd * 1.50; //quanto vou pagar de bauru

quantidades[2] += qtd; //qtds de bauru

valorTotal += valoresParciais[2];

break;

case 103:

valoresParciais[3] += qtd * 1.20;

quantidades[3] += qtd;

valorTotal += valoresParciais[3];

break;

case 104:

valoresParciais[4] += qtd * 1.30;

quantidades[4] += qtd;

valorTotal += valoresParciais[4];

break;

case 105:

valoresParciais[5] += qtd * 1.00;

quantidades[5] += qtd;

valorTotal += valoresParciais[5];

break;

default:

printf("Codigo invalido");

}



getchar();

printf("Quer inserir mais um produto? Digite s ou n: ");

scanf("%c",&resposta);

}



for(i =0; i<6; i++){

if(quantidades[i] > 0){

switch(i){

case 0:

printf("\nCachorro quente | %d un | R$%.2f",quantidades[i],valoresParciais[i]);

break;

   case 1:

printf("\nBauru S | %d un | R$%.2f",quantidades[i],valoresParciais[i]);

break;

case 2:

printf("\nBauru C O | %d un | R$%.2f",quantidades[i],valoresParciais[i]);

break;

case 3:

printf("\nHamburguer | %d un | R$%.2f",quantidades[i],valoresParciais[i]);

break;

case 4:

printf("\nX Burguer | %d un | R$%.2f",quantidades[i],valoresParciais[i]);

break;

case 5:

printf("\nRefrigerante | %d un | R$%.2f",quantidades[i],valoresParciais[i]);

break;

default:

printf("Nunca vou entrar aqui!");

}

}

}



printf("\nValor total %.2f",valorTotal);



return 0;

}