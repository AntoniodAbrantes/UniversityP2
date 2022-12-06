#include "jogo.h"

//VARIÁVEIS GLOBAIS (ACEITAS EM TODAS AS FUNÇÕES)
int op; //Opção para menu principal
char usuarios[30][50]; // vetor de usuarios
char v_palavra[1000][6]; // vetor que receberá todas as palavras do arquivo
char ranking[1000][30][10]; //vetor que receberá os valores que estão no arquivo ranking, no máximo 1000 ususários. [quantidade][nomes][pontuação]
int tam_ranking; // Para saber quantos usários tem no ranking

//Função para sortear palavra
int sorteaPalavra() {
	
	FILE *palavras;
	palavras = fopen("ArqPalavras.txt","r");
	
	if(palavras == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
	}
	
	int nPalavras = 0;
	int nSorteio; //variável que receberá o índice do arquivo da palavra sorteada 
	int i;
	
	while(fscanf(palavras,"%s",v_palavra[nPalavras]) != EOF ){ //ler todas as palavras do arquivo
        nPalavras++; //conta quantas palavras há no arquivo
    }
    
    srand(time(NULL)); //inicializa o gerador de números aleatórios
    nSorteio = rand() % nPalavras;  
	fclose(palavras);
	return nSorteio;
}


//Função para ranking
int pontuacao(char * palavra){
	int i;
	int pontos = 0;

//Contar quantas letras acertou
	for(i=0;i<5;i++){
		if(palavra[2*i] != '_')
			pontos++;
	}

	return pontos;
}

//Função para saber o tamanho do ranking
void carregar_ranking(){
	int i;
	FILE *f_ranking = fopen("Ranking.txt","r");
	i = 0;
	
	//lê do arquivo duas strings, uma com nome e outra com a pontuação
	while(i < 1000 && fscanf(f_ranking,"%s %s",ranking[i][0],ranking[i][1]) != EOF ){
		i++;
	}
	
	tam_ranking = i;
}

//atualiza a pontuação do usuário
void atualizar_ranking(char *usuario){
	int i;
	FILE *f_ranking = fopen("Ranking.txt","w");
	bool existe = false;
	
	for(i = 0; i < tam_ranking;i++){
		//procura se existe o nome do usuário no ranking
		if(strcmp(ranking[i][0],usuario) == 0){
			 //Atoi é utilizado para convertar a pontuação para inteiro e somar +1. E sprintf transforma novamente para string, para continuar no vetor de strings (ranking)
			sprintf(ranking[i][1],"%d",atoi(ranking[i][1]) + 1);
			existe = true;
			break;
		}
		
	}
	if(!existe){
		//Se o usuário ainda não existe no ranking, ele é adicionado no final do ranking
		strcpy(ranking[tam_ranking][0],usuario);
		//Atualiza a pontuação para 1
		sprintf(ranking[tam_ranking][1],"%d",1);
		//Como adicionou mais um usuário, o tamanho do ranking é aumentado em 1
		tam_ranking++;
	}
	
	for(i = 0;i < tam_ranking;i++){
		//Salvar o nome e a pontuação no arquivo
		fprintf(f_ranking,"%s %s\n",ranking[i][0],ranking[i][1]);		
	}
	
	fclose(f_ranking);	
}

//Função para auxiliar na alteração da ordem do ranking
void troca_str(char *s1, char * s2){
	char aux[100];
	strcpy(aux,s1);
	strcpy(s1,s2);
	strcpy(s2,aux);
}

//Ordena o ranking de forma decrescente
void ordernar_ranking(){
	int i ,j;
	
	//Compara uma pontuação do início do ranking com uma do final do ranking	
	for(i = tam_ranking-1; i>0; i--){
		for(j = 0; j<i;j++){
			if(atoi(ranking[i][1]) > atoi(ranking[j][1])) {
				troca_str(ranking[i][0],ranking[j][0]); //troca posição do nome
				troca_str(ranking[i][1],ranking[j][1]); //troca posição da pontuação
			}	
		}		
	} 
}

//Função para imprimir o ranking
void mostrar_ranking() {
	int i;
	carregar_ranking(); //carrega novamente o ranking, para o caso de ter havido mudança ou não ter sido carregado ainda
	ordernar_ranking(); //ordena de forma decrescente
	
	system("color 74");
	printf("\n___________________________________________RANKING_____________________________________________________\n\n");
	printf("Nome -> Pontuação: \n");
	for(i = 0; i < tam_ranking;i++){
		printf("\n%s  ",ranking[i][0]);
		printf(" ->  %s\n",ranking[i][1]);	
	}
	printf("\n________________________________________________________________________________________________________\n\n");		
	system("pause");
	system("cls");
}


//Função para carregar usuários do arquivo em um vetor de usuários
void carregar_usuarios(FILE *cad_usuario){
	int i = 0;
	
	while(i < 50 && fscanf(cad_usuario,"%s",usuarios[i]) != EOF){
		i++;
	}
}

//Função para testar se o usuário já existe no arquivo
bool existe_usuario(char *usuario){
	
	int i = 0;
	for(i = 0; i < 50; i++){
		if(strcmp(usuario,usuarios[i]) == 0)
			// Usuário já existe no cadastro	
			return true; 
	}
	//Usuário não existe no cadastro
		return false;
}

//Função para cadastro de usuário
void cadastro_usuario(){ 
	int i=1;
	
	system("color 80");
    printf("\n___________________________________________CADASTRO DE USUÁRIO_____________________________________________________");
	
	FILE *cad_usuario;
	cad_usuario = fopen("ArqUsuarios.txt","a+");
	
	char usuario[50];
	
	if(cad_usuario == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
	}else{
		carregar_usuarios(cad_usuario);
		do{
			printf("\nDigite o nome: ");
			scanf("%s",usuario);
			if(existe_usuario(usuario)){
				printf("Usuário já existe.\n");
				printf("\n\nDigite 1 para cadastrar outro usuário ou 0 para voltar ao Menu Principal.\n");
				scanf("%d",&i);	
			}
			else{
				//Salva no arquivo
			fprintf(cad_usuario,"%s\n",usuario);
			printf("Usuário cadastrado com sucesso! \n\nDigite 1 para continuar cadastrando ou 0 para voltar ao Menu Principal.\n");
			scanf("%d",&i);
			}
			
		}while (i==1);
		
		if(i!=1){
			fclose(cad_usuario);
		}
	}
	printf("\n__________________________________________________________________________________________________________________\n\n");		
	system("pause");
	system("cls");
}


//Função para cadastrar palavras novas
void cadastro_palavra(){ 
	int i=1;
	char palavra[6];
	
	system("color 50");
	printf("\n_____________________________CADASTRO DE PALAVRA__________________________________________________________________");
	
	FILE *palavras;
	
	palavras = fopen("ArqPalavras.txt","a");
	
	if(palavras == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
	}else{
		do{
			printf("\n\nEscreva a palavra (com 5 letras) que deseja cadastrar: ");
			scanf("%s",palavra);
			// Verifica se o tamanho da palavra é válido
			if(strlen(palavra)!= 5){
				printf("Palavra inválida, digite novamente!\n");
			}
			else{
				//Salva palavra no arquivo
				fprintf(palavras,"%s\n",palavra);
				printf("Palavra cadastrada com sucesso!\n");
			}
			printf("\nDigite 1 para continuar cadastrando ou 0 para voltar ao Menu Principal.\n");
			scanf("%d",&i);
		}while (i==1);
		
		if(i!=1){
			fclose(palavras);
		}
	}
	printf("\n_________________________________________________________________________________________________________________\n\n");	
	system("pause");
	system("cls");
}

void menu_principal(){
		system("color 60");
  		printf("\n\t___________________________________________________________________\n");
    	printf("\t___________________________________________________________________\n");
    	printf("\t___________________________________________________________________\n");
    	printf("\t___________________________                    ____________________\n");
    	printf("\t___________________________                    ____________________\n");
    	printf("\t___________________________   JOGO DA PALAVRA  ____________________\n");
    	printf("\t___________________________                    ____________________\n");
    	printf("\t___________________________________________________________________\n");
    	printf("\t___________________________________________________________________\n");
    	printf("\t___________________________________________________________________\n\n\n");
    	printf("\tEscolha uma das opções abaixo:\n\n",135,228);
    	printf("\t%c 1 Jogar\n\t%c 2 Cadastrar Palavra\n\t%c 3 Cadastrar Usuário \n\t%c 4 Ver Ranking \n\t%c 5 Ajuda \n\t%c 6 Créditos \n\t%c 7 Sair\n\n",16,16,16,16,16,16,16);
    	printf("\tOpção: ");
		scanf("%d",&op);
    	system("cls");
}

void ajuda(){
	system("color 90");
    printf("\n_____________________________QUAL O OBJETIVO DO JOGO?__________________________________________________________________");
    printf("\n\n\t     O Jogo da Palavra foi feito para você advinhar a palavra que escolhemos para você.\n");                     
    printf("\n______________________________REGRAS O JOGO____________________________________________________________________________");
    printf("\n\n\t1- Você deve realizar seu cadastro antes de jogar a primeira vez.");
    printf("\n\n\t2- Você pode jogar quantas vezes quiser, mas tem apenas 5 tentativas para tentar acertar a palavra.");
    printf("\n\n\t3- A cada novo jogo, uma nova palavra é sorteada. Você pode nos ajudar a aumentar nosso banco de palavras cadastrando uma nova.");
    printf("\n\n\t4- Para cadastrar uma nova palavra, é preciso que ela possua 5 letras.");
    printf("\n\n\t5- Lembre-se que pode haver palavras com letras repetidas. Se a sua possuir, nós vamos te dar uma dica.");
    printf("\n\n\t6- Seu nome só aparecerá em nosso Ranking se você conseguir acertar ao menos uma palavra.");
    printf("\n\n\t7- Cada acerto te concederá 1 ponto.");
    printf("\n\n\n\n\t Está pronto pra jogar? \n");
    printf("_______________________________________________________________________________________________________________________\n");
	system("pause");
    system("cls");
}

void creditos(){
	system("color 90");
    printf("\n_____________________________CRÉDITOS__________________________________________________________________");
    printf("\n\n\t     Criação: Mariana Barros e Antônio Abrantes.\n");
	printf("\t     Alunos do segundo período de Ciências da Computação.\n");
	printf("\n\t     Professores: Douglas e Daniel.\n");
	printf("_______________________________________________________________________________________________________\n");
	system("pause");
    system("cls");
}


//Função para jogar
void jogo(){
	system("color 30");
	int num;
	int n_palavra,i,j,k,cont_certas;
	char palavra_final[] = "_ _ _ _ _"; //palavra final digitada pelo usuário
	char palavra_a_descobrir[6],entrada[6],usuario[50];
	
	FILE *cad_usuario;
	cad_usuario = fopen("ArqUsuarios.txt","r");
	
	//Para conferir se o usuário existe
	carregar_usuarios(cad_usuario);
	fclose(cad_usuario);
	
	carregar_ranking();
	
	printf("\n_____________________________________________JOGO DA PALAVRA______________________________________________________");
		
	cont_certas = 0;
	n_palavra = sorteaPalavra(); //Recebe a palavra sorteada
	strcpy(palavra_a_descobrir,v_palavra[n_palavra]); //palavra_a_descobrir receberá a palavra sorteada
	
	printf("\n\nDigite o usuário: ");
	scanf("%s",usuario);
	
	if(!existe_usuario(usuario)){
		printf("\n\nUsuário inexistente.\nCrie o usuário para poder jogar!\n\n");
		system("pause");
		system("cls");
		cadastro_usuario();
		return; //Volta ao Menu Principal.
	}
	
	for(i=0;i<5;i++){
		int contagem[30] = {0}; //Vetor de letras do alfabeto. Garante que todos são nulo
		
		printf("\n\n%s\n\ \n\n",palavra_final); //imprime os caracteres digitados corretamente, substituindo o "_"
		scanf("%s",entrada);
		
		for(j = 0; j<5;j++){
			if(toupper(palavra_a_descobrir[j]) == toupper(entrada[j])){
				palavra_final[2*j] = toupper(entrada[j]);  //O 2*j é para pular espaços em branco da variável palavra_final e substituir o "_" pelo caracter
														  // que foi digitado corretamente
			}		
		}
		
		for(j=0;j<5;j++){
			for(k=0;k<5;k++){
				//Verifica se cada caracter da entrada (palavra digitada) existe e e se está na posição errada da palavra sorteada 
				if(toupper(palavra_a_descobrir[j]) == toupper(entrada[k])  && j != k  && abs(j-k) > 1) { //O último parâmetro é para não pegar letras repetidas
					contagem[toupper(palavra_a_descobrir[j]) - 'A'] = 1; //O valor do A na tabela Asscii é 65 e o vetor contagem começa em 0. 	
				}
			}
		}
		
		for (j = 0 ; j< 30; j++){
			if(contagem[j] != 0)
				printf("\n%c Tente uma palavra com a letra %c em outra posição.\n",16,j+'A'); //Imprime a letra correta
		}		
		
		cont_certas = pontuacao(palavra_final);
		
		if(cont_certas == 5) //se o usuário acertar, finaliza o jogo
			break;
	}
	
	if(cont_certas == 5){
		system("cls");
		system("color 20");
		printf("_______________________________________________________________________________________________________________________\n");
		printf("\n\n\n\t\tParabéns, você ganhou!\n\n\n");
		printf("_______________________________________________________________________________________________________________________\n");
		atualizar_ranking(usuario);
		printf("\nDigite 1 para continuar jogando ou 0 para voltar ao Menu Principal.\n");
		scanf("%d",&num);
		
		if(num==1){
			system("cls");
			jogo();
		}else{
			system("cls");			
		}		
	}
		
	else{
		system("cls");
		system("color 40");
		printf("_______________________________________________________________________________________________________________________\n");
		printf("\n\n\n\t\tQue pena, você errou!\n");
		printf("\n\n\t\tA palavra era %s.\n\n\n",palavra_a_descobrir);
		printf("_______________________________________________________________________________________________________________________\n");
		printf("\n\n\nDigite 1 para continuar jogando ou 0 para voltar ao Menu Principal.\n");
		scanf("%d",&num);
		
		if(num==1){
			system("cls");
			jogo();
		}else{
			system("cls");			
		}
	}	
}
