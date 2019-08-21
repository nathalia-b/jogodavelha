#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"
using namespace std;


int main(){
	
char **tabuleiro; //Declaração da matriz tabuleiro
char j1, j2; //Jogador 1 e Jogador 2;
int preg = 0, jj1 = 1, jj2 = 2; /*Variáveis auxiliares. Contador para fazer as jogadas, preg para auxiliar a impressão do tabuleiro pré-game
										jj1 e jj2 para serem os equivalentes inteiros [1 e 2] dos jogadores.*/ 
int i, j, linhas = 3, colunas = 3; 
char win;  

tabuleiro = (char**)calloc(linhas, sizeof(char*));	//Alocando o tabuleiro

for(i = 0; i<linhas; i++){
	tabuleiro[i] = (char*)calloc(colunas, sizeof(char));		//Alocando o tabuleiro
}

for(i = 0; i<linhas; i++){
	for(j = 0; j<colunas; j++){
		tabuleiro[i][j] = ' '; 
	}
}

//menu();
int resp;
do{
imprimirTabuleiro(tabuleiro, linhas, colunas, preg); //Imprime tabuleiro antes do jogo começar

limpar_tabuleiro(tabuleiro, linhas, colunas);	//Zera o tabuleiro

escolherJogador(&j1, &j2);
imprimirTabuleiro(tabuleiro, linhas, colunas, preg);
controla_rodadas(tabuleiro, linhas, colunas, preg, j1, j2, jj1, jj2, win);

cout<<"\nDeseja jogar novamente? 1. Sim 2. Não\n";
cin >> resp; 
if(resp == 1){
	limpar_tabuleiro(tabuleiro, linhas, colunas);
	preg = 0;
}else{
	cout<<"\nTudo bem, até a próxima! :)\n ";
}
}while(resp < 2 && resp != 0);


return 0;

}




