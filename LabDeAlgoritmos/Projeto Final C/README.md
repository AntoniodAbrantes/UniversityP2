INTRODUÇÃO

O Jogo da Palavra, desenvolvido pelos alunos Mariana Barros e Antônio Abrantes, teve como inspiração o jogo Termo, que se popularizou no Brasil e pode ser comparado ao Jogo da Forca.
O objetivo principal do Termo é fazer com que o usuário tente adivinhar uma palavra em até 6 tentativas. Enquanto o jogador não acertar, ele precisará arriscar palavras ao invés de dar palpites de letras. Além disso, uma nova palavra é sorteada a cada 24h e é a mesma para todos que estejam jogando naquele dia.
A grande diferença entre os jogos citados aqui se dá no seguinte ponto: no Jogo da Palavra, o usuário pode jogar quantas vezes quiser. Enquanto isso, o Termo só pode ser jogado uma única vez ao dia pelo mesmo jogador. Ademais, no Jogo da Palavra o termo a ser descoberto é sorteado cada vez que o usuário inicia o jogo.
Há outras características marcantes no Jogo da Palavra, entre elas cabe destacar a possibilidade do jogador realizar seu cadastro e o cadastro de novas palavras, além da visualização da pontuação em um ranking. 
REGRAS E INFORMAÇÕES ADICIONAIS

O Jogo da Palavra possui algumas regras, são elas:
O jogador precisa realizar seu cadastro antes de jogar a sua primeira partida;
O jogador pode jogar quantas vezes quiser;
O jogador só possui 5 chances para acertar a palavra sorteada;
O jogador pode cadastrar novas palavras, mas elas devem conter 5 letras;
O jogador só verá seu nome no Ranking se ele adivinhar o termo ao menos uma vez;
Não há diferenciação de letras maiúsculas ou minúsculas, porém acentos não são considerados;
Pode haver palavras com letras repetidas;
A cada sugestão, o jogador recebe dicas do quanto está próximo da resposta correta.

DESCRIÇÃO GERAL

A principal característica do Jogo da Palavra é o sorteio de uma palavra nova sempre que for iniciado o jogo. Sendo assim, foi feita uma função chamada sorteaPalavra(). Nessa função é feita a abertura de um arquivo no modo leitura, e ela retornará o índice do arquivo da palavra sorteada, além de fazer a contagem de quantas palavras há no arquivo para que possa ser usada junto à função rand() da biblioteca stdlib. 

DIFICULDADES E SOLUÇÕES

Algumas dificuldades foram encontradas ao longo do desenvolvimento desse projeto, entre elas cabe destacar o sorteio da palavra a ser adivinhada pelo jogador. Optamos por utilizar a função rand() da biblioteca stdlib e, como ela retorna um número inteiro, no caso desse jogo foi retornado o índice da palavra do arquivo e não a palavra em si. 
Para solucionar esse problema, foram criadas duas variáveis, uma do tipo int chamada n_palavra para receber o índice e outra do tipo char chamada palavra_a_descobrir para, posteriormente, armazenar a palavra que foi sorteada. Em seguida, foi criado um vetor v_palavra[1000][6] que armazena todas as palavras presentes no arquivo. 
Dessa forma, ao fazer strcpy(palavra_a_descobrir,v_palavra[n_palavra]), foi possível armazenar a string. 
Outro desafio foi verificar e informar ao usuário se algum caracter da palavra digitada por ele existe na palavra sorteada, mas está na posição errada  e, em caso de haver duas letras repetidas, não informar duas vezes que há essa letra na palavra. 
Utilizamos, primeiramente, a função toupper() da biblioteca ctype, para não haver diferenciação de letras maiúsculas ou minúsculas no momento da comparação. Além disso, foi preciso criar um vetor que armazena a quantidade de letras do alfabeto chamado 
contagem[30] com todos os valores nulos. Após isso, foram criados laços de repetição percorrendo toda a palavra para comparar dois caracteres entre si. 
Por fim, para entender qual era a letra em questão, foi feito o uso da Tabela Asscii. Então, ao chegar ao índice da letra que estava correta, mas na posição errada, foi subtraído do valor de ’A’, que corresponde a 65, o valor da letra correta. Ao obter esse valor, ele foi  igualado a 1 e salvo no vetor contagem[30].
Ou seja, o vetor que antes era composto por valores nulos, agora possui o valor 1 no índice correspondente a letra do alfabeto. Dessa forma: contagem[toupper(palavra_a_descobrir[j]) - 'A'] = 1
Assim, quando contagem[j] for diferente de 0, significa que a letra existe na palavra sorteada. 

toda a documentação é encontrada na pasta RELATORIO_PROJETOC.PDF
