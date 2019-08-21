#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"
using namespace std;




void imprimirTabuleiro(char **tabuleiro, int linhas, int colunas, int preg){ //FUNÇÃO PARA IMPRIMIR O TABULEIRO

int i, j;

if(preg == 0){
cout << "Use as referências de linhas e colunas abaixo:\n";
	for(i = 0; i<linhas; i++){
	cout << "\n";
		for(j = 0; j<colunas; j++){
			if(j == 0){
			cout<<"\t  "<<i <<" " <<j <<"  |  ";
			}else if(j < colunas-1){
			cout<<i<<" "<<j <<"  |  ";
			}else{
				cout<<i <<" "<<j<<"   ";
				cout<<"\n\t_______________________";
				cout<<"\n";	
			}
			
		}
}

}else{

for(i = 0; i<linhas; i++){
	cout << "\n";
		for(j = 0; j<colunas; j++){
			if(j == 0){
			cout<<"\t  "<< tabuleiro[i][j]<<"  |  ";
			}else if(j < colunas-1){
			cout<< tabuleiro[i][j]<<"  |  ";
			}else{
				cout<<tabuleiro[i][j]<<"   ", tabuleiro[i][j];
				cout<<"\n\t_________________";
				cout<<"\n";	
			}
			
		}
}


}
}


int completo(char **tabuleiro, int linhas, int colunas){
	cout<<"Verificando tabuleiro...\n";
	int i, j, tab_comp;

	for(i = 0; i<linhas; i++){
		for(j = 0; j<colunas; j++){
			if(tabuleiro[i][j] == '-'){
				tab_comp = 1;
				return tab_comp;
			}else{
				tab_comp = 0;
			} 
	}
}
	return tab_comp; 
}


void limpar_tabuleiro(char **tabuleiro, int linhas, int colunas){ //Função para limpar/zerar o tabuleiro; 
int i, j;

for(i = 0; i<linhas; i++){
	for(j = 0; j<colunas; j++){
		tabuleiro[i][j] = ' '; 
	}
}
}
