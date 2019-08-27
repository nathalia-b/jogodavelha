#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"
#include <iostream>
using namespace std;



void aviso(int jj){  
cout<<"\n -> Jogador " << jj << ", é sua vez! Escolha a linha e a coluna de sua jogada (de 0 a 2 apenas)\n";
}


void status(char **tabuleiro, int linhas, int aux, int colunas, char jx){
int i, j;
	if(aux == 1){
		cout<<"\tFique atento, J1! Atualmente você ocupa as seguintes posições:\n";
	}else{
		cout<<"\tFique atento, J2! Atualmente você ocupa as seguintes posições:\n";
	}

	for(i = 0; i<linhas; i++){
		for(j = 0; j<colunas; j++){
			if(tabuleiro[i][j] == jx){
				cout<<i<<" "<<j<<"   ";
				
			
}
}
}
cout<<"\n";
}


void lembrete(int jj, char j, char **tabuleiro, int linhas, int colunas, int preg){
int resp, x = (linhas*colunas)-preg;
cout<<"\n\tJogador " << jj << ", lembre-se: você é o '"<<j<<"'!\n";
cout<<"Faltam apenas "<<x<<" rodadas para o fim do jogo. ;)\n";
cout<<"\t";

}

