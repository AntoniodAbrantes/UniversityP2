#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h> // para utilizar acentos
#include <time.h> //para usar time()
#include <ctype.h> //para utilizar toupper()
#include "jogo.h" //biblioteca com implementa��o das fun��es

extern int op; //Op��o para menu principal
extern int tam_ranking; // Para saber quantos us�rios tem no ranking

//Fun��o para aceitar acentos
void acento(){ 
	setlocale(LC_ALL,"Portuguese"); 
}

int main(){
	
	acento();
    tam_ranking = 0;
    
	do{
		menu_principal();
    
    switch(op){
        case 1: //usu�rio joga
            jogo();
	        system("pause");
            system("cls");    
	    break;
	    case 2: //cadastra palavra
    		cadastro_palavra();
        break;
    	case 3: //cadastra usu�rio
    		cadastro_usuario();   
    	break;
    	case 4:
    		mostrar_ranking();
    	break;
        case 5:  //usu�rio acessa Ajuda
	    	ajuda();
	    break;
        case 6: //Cr�ditos
			creditos();
		break;            
        case 7: //encerra
        	return 1;
        break;
		default:
			printf("Op��o inv�lida.\n\n");
			system("pause");
			system("cls");		    	
  	}
  }while(op!=7);
  	
   return 0; 
}
