#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void acento(){
	setlocale(LC_ALL,"Portuguese");
}


int main(){
  int op;
  char palavras[6][10] = {"Afeto", "Vigor", "Sagaz", "Plena", "Fazer", "Poder"};
  
  acento();
  
  
  do{
  	system("color 20");
  	printf("\n\t________________________________\n");
    printf("\t__________________________________\n");
    printf("\t__________________________________\n");
    printf("\t_______                    _______\n");
    printf("\t_______                    _______\n");
    printf("\t_______   JOGO DA PALAVRA  _______\n");
    printf("\t_______                    _______\n");
    printf("\t__________________________________\n");
    printf("\t__________________________________\n");
    printf("\t__________________________________\n\t\t\t\tCriado por: Mariana e Antônio.\n\n");
    printf("\tEscolha uma das opções abaixo:\n\n",135,228);
    printf("\t%c 1 Jogar.\n\t%c 2 Ajuda.\n\t%c 3 Sair.\n\n",16,16,16,162,16);
    printf("\tOpção: ");
    scanf("%d",&op);
    system("cls");
    
    switch(op){
        case 1:
            printf("Elementos da string:\n"); 
			for(int i = 0; i < 6; i++){
    			printf("%s\n", palavras[i]);
	        }
            system("pause");
            system("cls");
	    break;
	    case 2:
	    	system("color 90");
    		printf("\n__________QUAL O OBJETIVO DO JOGO?_______________________",130);
    		printf("\n\n\t     O Jogo de Palavras foi feito para você advinhar a palavra que escolhemos para você.\n");                     
    		printf("\n___________REGRAS O JOGO_________________________");
    		printf("\n\n\t1- Você tem, no máximo, 5 tentativas para acertar a palavra.");
    		printf("\n\n\t2- Lembre-se que pode haver palavras com letras repetidas. Nós não vamos te ajudar a descobrir se a sua possui. \n");
    		printf("_________________________________________\n");
    
    		printf("\n\n\n\ \t%c 1 Voltar ao menu.\n\t%c 2 Sair.",16,16);
    		system("pause");
            system("cls");
    	break;
	    	
  }
  }while(op!=3);
  	
  	
   return 0; 
  }