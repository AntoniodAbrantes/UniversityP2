#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h> // para utilizar acentos
#include <time.h> //para usar time()
#include <ctype.h> //para utilizar toupper()

extern int sorteaPalavra();
extern int pontuacao();
extern void carregar_ranking();
extern void atualizar_ranking(char *usuario);
extern void troca_str(char *s1, char * s2);
extern void ordernar_ranking();
extern void mostrar_ranking();
extern void carregar_usuarios(FILE *cad_usuario);
extern bool existe_usuario(char *usuario);
extern void cadastro_usuario();
extern void cadastro_palavra();
extern void menu_principal();
extern void ajuda();
extern void creditos();
extern void jogo();

