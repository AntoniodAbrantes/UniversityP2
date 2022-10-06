#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("O numero lido foi %d e ele eh par",num);
	}else{
		printf("O numero lido foi %d e ele eh impar",num);
	}
		
    return 0;
}