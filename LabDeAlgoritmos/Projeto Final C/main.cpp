#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h> // para utilizar acentos
#include <time.h> //para usar time()
#include <ctype.h> //para utilizar toupper()
#include "jogo.h" //biblioteca com implementação das funções

extern int op; //Opção para menu principal
extern int tam_ranking; // Para saber quantos usários tem no ranking

//Função para aceitar acentos
void acento(){ 
	setlocale(LC_ALL,"Portuguese"); 
}

int main(){
	
	acento();
    tam_ranking = 0;
    
	do{
		menu_principal();
    
    switch(op){
        case 1: //usuário joga
            jogo();
	        system("pause");
            system("cls");    
	    break;
	    case 2: //cadastra palavra
    		cadastro_palavra();
        break;
    	case 3: //cadastra usuário
    		cadastro_usuario();   
    	break;
    	case 4:
    		mostrar_ranking();
    	break;
        case 5:  //usuário acessa Ajuda
	    	ajuda();
	    break;
        case 6: //Créditos
			creditos();
		break;            
        case 7: //encerra
        	return 1;
        break;
		default:
			printf("Opção inválida.\n\n");
			system("pause");
			system("cls");		    	
  	}
  }while(op!=7);
  	
   return 0; 
}
