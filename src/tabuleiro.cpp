#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"
using namespace std;


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
