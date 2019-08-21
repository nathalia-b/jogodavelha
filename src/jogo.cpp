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
	cout<<"Opcao invalida!";
}
}while(resp != 'O' && resp != 'o' && resp != 'x' && resp != 'X');

cout << "\n\t> O jogador 1 está como " <<*j1<<"\n\t> O jogador 2 está como "<<*j2<<"\n\n\t\tVamos começar...\n";

}


void jogada(char **tabuleiro, int linhas, int colunas, char j, int jj, int *preg){ //FUnção qe checa se a posição está ocupada e posiciona os X e O
*preg = *preg + 1;
int l, c, aux = 0;

do{
if(jj == 1){ //SE for o jogador 1, direciona a mensagem para o jogador 1;

	aviso(jj);
	cout<<"\t\t";
	cin>>l;
	cin>>c;

}else if(jj == 2){ //Se for o jogador 2, direciona a mensagem para ele; 
	aviso(jj);
	cout<<"\t\t";
	cin>>l;
	cin>>c;
}
	if(tabuleiro[l][c] == ' '){ //Se a posição [l][c] do tabuleiro estiver com o caracter padrao estabelecido '-', substitui
		tabuleiro[l][c] = j;
		aux = 1;
	}else if(l > 2 || c > 2){
		cout<<"\n\tPosição inexistente!!\tPor favor, escolha outra posição.\n";
	}else{ //Se não estiver com '-', avisa que está ocupado
		cout<<"\n\tPosição já ocupada!\tEscolha uma outra posição!\n";
		cout<<"\n";
		status(tabuleiro, linhas, jj, colunas, j); //e informa as posições que o jogador já ocupa
		aux = 0; 

	}
}while(aux == 0);
}

int verificando_vencedor(char **t, char j1, char j2, char *win){

//verificando as vitorias horizontais
if(t[0][0] == t[0][1] && t[0][0] == t[0][2] && t[0][0] != ' '){
	
				if(t[0][0] == j1){

					*win = j1;
					return 0;

				}else if(t[0][0] == j2){

					*win = j2; 
					return 0;

				}
}else if(t[1][0] == t[1][1] && t[1][0] == t[1][2] && t[1][0] != ' '){
				if(t[1][0] == j1){
					*win = j1;
					return 0;
				}else if(t[1][0] == j2){
					*win = j2;
					return 0;
				}

}else if(t[2][0] == t[2][1] && t[2][0] == t[2][2] && t[2][0] != ' '){
				if(t[2][0] == j1){
					*win = j1;
					return 0;
				}else if(t[2][0] == j2){
					*win = j2;
					return 0;
				}
	
}else if(t[0][0] == t[1][0] && t[0][0] == t[2][0] && t[0][0] != ' '){ //CHECANDO AS VERTICAISSSSSSSSSSSSSSSSSSSS

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

}else{
	*win = '0';
	return 0;
}
}
	
void ganhou(char j, int jj, int jjj){
	cout<<"Sentimos muito, jogador "<< jj <<", já existe um ganhador e ele é o jogador "<<jjj<<"! Parabéns!";
}


void controla_rodadas(char **tabuleiro, int linhas, int colunas, int preg, char j1, char j2, int jj1, int jj2, char win){
int cont;

	for(cont = 0; cont<(linhas*colunas); cont++){		//Determina a ordem das jogadas; 

		if(cont == 3){
			lembrete( jj2,  j2, tabuleiro, linhas, colunas, preg);
		}else if(cont == 6){
			lembrete( jj1,  j1, tabuleiro, linhas, colunas, preg);
		}

		if(cont%2 == 0){
		jogada(tabuleiro, linhas, colunas, j1, jj1, &preg);
		}else{
		jogada(tabuleiro, linhas, colunas, j2, jj2, &preg);
		}

		if(cont >= 4){
			verificando_vencedor(tabuleiro, j1, j2, &win);
			if(win != '0'){
				if(win == j1){
					ganhou(win, jj2, jj1);
					imprimirTabuleiro(tabuleiro, linhas, colunas, preg);	
					break;
				}else{
					ganhou(win, jj1, jj2);
					imprimirTabuleiro(tabuleiro, linhas, colunas, preg);
					break;
				}
			}
				if(cont == 8){
					if(completo(tabuleiro, linhas, colunas) == 0){
						cout<<"Ótimo, o tabuleiro está completo! Vamos ver quem venceu...\n";
					}
					if(win == j1){
					cout<<"\n\t> O ganhador é o jogador 1 ("<<win<<")!! Parabéns!";	
					break;
					}else if(win == j2){
					cout<<"\n\t> O ganhador é o jogador 2 ("<<win<<")!! Parabéns!";	
					break;
					}else{
					cout<<"\n\tPoxa!!!! Deu velha :(\n";
					break;
					}
				}
			}
		}

}

