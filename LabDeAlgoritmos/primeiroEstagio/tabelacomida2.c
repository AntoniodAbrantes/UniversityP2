#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int codigo;
	float valorTotal = 0;
	float quantidade;
	float valor0, valor1, valor2, valor3, valor4, valor5;
	float quantidades[6] = {};
	
	do {
		printf("\nDigite o codigo do produto(100, 101, 102, 103, 104, 105): ");
		scanf("%i", &codigo);
		if(codigo == 0){
			break;
		}
		printf("Quantidade do produto: ");
		scanf("%f", &quantidade);
		printf("\nTecle 0 para finalizar o pedido");
		if(codigo == 100){
			valorTotal += quantidade*1.2;
			quantidades[0]=quantidade;
			valor0 = quantidade*1.2; 
		} else if(codigo == 101){
			valorTotal += quantidade*1.3;
			quantidades[1]=quantidade;
			valor1 = quantidade*1.3;
		} else if(codigo == 102){
			valorTotal += quantidade*1.5;
			quantidades[2]=quantidade;
			valor2 = quantidade*1.5;
		} else if(codigo == 103){
			valorTotal += quantidade*1.2;
			quantidades[3]=quantidade;
			valor3=quantidade*1.2;
		} else if(codigo == 104){
			valorTotal += quantidade*1.3;
			quantidades[4]=quantidade;
			valor4= quantidade*1.3;
		} else if(codigo == 105){
			valorTotal += quantidade*1;
			quantidades[5]=quantidade;
			valor5 = quantidade*1.0;
		} else{
			printf("codigo invalido");
		}
	}while(codigo!=0);
		
if(quantidades[0]!=0){
	printf("\nCachorro Quente: R$1,20 x %.1f = %.2f", quantidades[0], valor0);
}
if(quantidades[1]!=0){
	printf("\nBauru Simples: R$1,30 x %.1f = %.2f", quantidades[1], valor1);
}
if(quantidades[2]!=0){
	printf("\nBauru Com Ovo: R$ 1,50 x %.1f = %.2f", quantidades[2], valor2);
}
if(quantidades[3]!=0){
	printf("\nHamburguer: R$ 1,20 x %.1f = %.2f", quantidades[3], valor3);
}
if(quantidades[4]!=0){
	printf("\nCheeseburguer: R$ 1,30 x %.1f = %.2f", quantidades[4], valor4);
}
if(quantidades[5]!=0){
	printf("\nRefrigerante: R$1,00 x %.1f = %.2f", quantidades[5], valor5);
}

printf("\nValor Total: R$ %.2f", valorTotal);

	
	return 0;
}