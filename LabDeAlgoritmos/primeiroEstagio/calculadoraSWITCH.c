#include <stdio.h>

int main(void){
	float num1, num2, resultado;
    int codigo;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("Digite codigo:\n1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n ");
	scanf("%d", &codigo);
	
	switch(codigo){
		case 1:
			resultado = num1 + num2;
			printf("O resultado da soma e: %f", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("O resultado da subtracao e: %f", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("O resultado da multiplicacao e: %f", resultado);
			break;
		case 4:
			if(num2 == 0){
				printf("Nao dividaras por zero!");
			}else{
				resultado = num1 / num2;
				printf("O resultado da soma e: %f", resultado);
			}
			break;
		default: //caso contrario
			printf("Codigo invalido!");
	}
	
	return 0;
}