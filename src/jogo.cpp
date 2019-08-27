#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"
#include <iostream>
using namespace std;




void escolherJogador(char *j1, char *j2){ //FUNÇÃO QUE DETERMINA QUAL JOGADOR FICARÁ COM X E QUAL JOGADOR FICARÁ COM O;

char resp; 
cout<<"Jogador 1: escolha X ou O\n";
do{
	cout<<"\t";
	cin >> resp;

if(resp == 'X' || resp == 'x'){
	*j1 = 'X';
	*j2 = 'O';
}else if(resp == 'O' || resp == 'o'){
	*j2 = 'X';
	*j1 = 'O';
}else{
	cout<<"Opcao invalida! Escolha novamente!\n";
}
}while(resp != 'O' && resp != 'o' && resp != 'x' && resp != 'X');

cout << "\n\t> O jogador 1 está como " <<*j1<<"\n\t> O jogador 2 está como "<<*j2<<"\n\n\t\tVamos começar...\n";

}

int verificando_vencedor(char **t, char j1, char j2, char *win){ //Não tão otimizado quanto poderia ser. 

/*				>>>		Compara as linhas	<<<				*/

if(t[0][0] == t[0][1] && t[0][0] == t[0][2] && t[0][0] != ' '){
/* Uma das posições deve ser diferente de ' ' pois este foi o caracter utilizado para preencher/zerar o tabuleiro. 
	Ou seja, essa comparação garante que estamos checando apenas posições preenchidas pelos jogadores */ 

/* Se as posições são iguais, checamos uma delas para ver qual caracter está lá, e a quem pertence (jogador 1 ou 2) */	

				if(t[0][0] == j1){ 	//Se a posição [Y][Z] for igual a variável inteira correspondente a J1 
					*win = j1;		//A variável que determina o vencedor torna-se j1;
					return 0;		/*Retorna, pois o programa já pode ser encerrado depois que atende a UMA das condicionais. Não há mais nada a ser verificado*/
				}else if(t[0][0] == j2){
					*win = j2; 
					return 0;
				}

}else if(t[1][0] == t[1][1] && t[1][0] == t[1][2] && t[1][0] != ' '){


				if(t[1][0] == j1){
					*win = j1;
					return 0;
				}else if(t[1][0] == j2){	//Se a posição [Y][Z] for igual a variável inteira correspondente a J2
					*win = j2;				//A variável que determina o vencedor torna-se j2;
					return 0;				/*Retorna, pois o programa já pode ser encerrado depois que atende a UMA das condicionais. Não há mais nada a ser verificado, já há um vencedor*/
				}

}else if(t[2][0] == t[2][1] && t[2][0] == t[2][2] && t[2][0] != ' '){

				if(t[2][0] == j1){
					*win = j1;
					return 0;
				}else if(t[2][0] == j2){
					*win = j2;
					return 0;
				}

/*				>>>		Compara as colunas	<<<				*/

}else if(t[0][0] == t[1][0] && t[0][0] == t[2][0] && t[0][0] != ' '){ 

				if(t[0][0] == j1){
					*win = j1;
					return 0;
				}else if(t[0][0] == j2){
					*win = j2;
					return 0;
				}
}else if(t[0][1] == t[1][1] && t[0][1] == t[2][1] && t[0][1] != ' '){
				if(t[0][1] == j1){
					*win = j1;
					return 0;
				}else if(t[0][1] == j2){
					*win = j2;
					return 0;
				}
}else if(t[0][2] == t[1][2] && t[0][2] == t[2][2] && t[0][2] != ' '){
				if(t[0][2] == j1){
					*win = j1;
					return 0;
				}else if(t[0][2] == j2){
					*win = j2;
					return 0;
				}

/*				>>>		Compara as diagonais	<<<				*/

}else if(t[0][0] == t[1][1] && t[0][0] == t[2][2] && t[0][0] != ' '){

				if(t[0][0] == j1){
					*win = j1;
					return 0;
				}else if(t[0][0] == j2){
					*win = j2;
					return 0;
				}
}else if(t[0][2] == t[1][1] && t[0][2] == t[2][0] && t[0][2] != ' '){

				if(t[0][2] == j1){
					*win = j1;
					return 0;
				}else if(t[0][2] == j2){
					*win = j2;
					return 0;
				}

}else{ //Se não tiver linha, coluna ou diagonal com valores iguais:
	*win = '0';	//A variável win, que determina o vencedor, é 0.
	return 0;
}
}
	
void ganhou_meio(char j, int jj, int jjj){
	cout<<"Sentimos muito, jogador "<< jj <<", já existe um ganhador e ele é o jogador "<<jjj<<"! Parabéns!\n";
}

void ver_vencedor(int win, int j1, int j2){

			if(win == j1){			//Qual o jogador venceu:
			cout<<"\n\t> O ganhador é o jogador 1 ("<<(char)win<<")!! Parabéns!";	
			return;
			}else if(win == j2){
			cout<<"\n\t> O ganhador é o jogador 2 ("<<(char)win<<")!! Parabéns!";	
			return;
			}else{
			cout<<"\n\tPoxa!!!! Deu velha :(\n";
			return;
			}

}


void controla_rodadas(char **tabuleiro, int linhas, int colunas, int preg, char j1, char j2, int jj1, int jj2, char win){
int cont;

	for(cont = 0; cont<(linhas*colunas); cont++){		//Determina a ordem das jogadas; 

		if(cont == 3){		/*Emite um aviso lembrando ao jogador 2 com qual caracter ele está jogando,
						quantas rodadas faltam para o fim do jogo e se ele deseja ver o tabuleiro atualizado*/
			lembrete( jj2,  j2, tabuleiro, linhas, colunas, preg);

		}else if(cont == 6){	/*Emite um aviso lembrando ao jogador 1 com qual caracter ele está jogando,
						quantas rodadas faltam para o fim do jogo e se ele deseja ver o tabuleiro atualizado*/
			lembrete( jj1,  j1, tabuleiro, linhas, colunas, preg);
		}

		if(cont%2 == 0){	//Determina a ordem de jogada. Se o número for par, a vez é do jogador 1.
		jogada(tabuleiro, linhas, colunas, j1, jj1, &preg);
		}else{				//Se for ímpar, a vez é do jogador 2;
		jogada(tabuleiro, linhas, colunas, j2, jj2, &preg);
		}

		if(cont >= 4){		//A partir da 5 jogada começa a verificar se já existe um vencedor. 
			verificando_vencedor(tabuleiro, j1, j2, &win);
			if(win != '0' && cont < 8){	//Se houver um vencedor,
				if(win == j1){	//Verifica qual é, jogador 1 
					ganhou_meio(win, jj2, jj1);
					imprimirTabuleiro(tabuleiro, linhas, colunas, preg);	
					break;
				}else{			//Ou jogador 2;
					ganhou_meio(win, jj1, jj2);
					imprimirTabuleiro(tabuleiro, linhas, colunas, preg);
					break;
				}
			}
				if(cont == 8){		//Quando estiver na última posição, ou seja, última jogada da rodada, verifica:

					completo(tabuleiro, linhas, colunas);	//Se tabuleiro está completo
					ver_vencedor(win, j1, j2); //Quem é o vencedor (ou se deu velha); 
					imprimirTabuleiro(tabuleiro, linhas, colunas, preg); //E por fim, imprime o tabuleiro;



				}
			}
		}

}



