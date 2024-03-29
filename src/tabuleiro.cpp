#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"
using namespace std;



void jogada(char **tabuleiro, int linhas, int colunas, char j, int jj, int *preg){ 
*preg = *preg + 1;
int l, c, aux = 0;

do{
if(jj == 1){ //SE for o jogador 1, direciona a mensagem para o jogador 1;

	aviso(jj);
	cout<<"\t\t\t\t";
	cin>>l;
	cin>>c;

}else if(jj == 2){ //Se for o jogador 2, direciona a mensagem para ele; 
	aviso(jj);
	cout<<"\t\t\t\t";
	cin>>l;
	cin>>c;
}
	if(tabuleiro[l][c] == ' '){ //Se a posição [l][c] do tabuleiro estiver com o caracter padrao estabelecido ' ', substitui
		tabuleiro[l][c] = j;
		aux = 1;
	}else if(l > 2){	//Se a linha for maior que 2, imprime aviso. 
		cout<<"\n\tPosição inexistente!!\tPor favor, escolha outra posição.";
	}else if(c > 2){	//Se a coluna for maior que 2, imprime aviso.
		cout<<"\n\tPosição inexistente!!\tPor favor, escolha outra posição.";

	}else{ //Se não estiver com ' ', avisa que está ocupado
		cout<<"\n\tPosição já ocupada!\tEscolha uma outra posição!";
		cout<<"\n";
		status(tabuleiro, linhas, jj, colunas, j); //e informa as posições que o jogador já ocupa
		aux = 0; //Variável uxiliar permanece em zero para que o do while continue até o usuário colocar uma posição valia. 

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


void completo(char **tabuleiro, int linhas, int colunas){
	cout<<"\nVerificando tabuleiro...\n";
	int i, j, tab_comp;

	for(i = 0; i<linhas; i++){
		for(j = 0; j<colunas; j++){
			if(tabuleiro[i][j] == ' '){
				cout<<"Hmm... O tabuleiro está incompleto";
				return;
			}else{
				cout<<"Ótimo, o tabuleiro está completo! Vamos ver se alguém venceu...\n";
				return;
			} 
			
	}
}
	return;
}


void limpar_tabuleiro(char **tabuleiro, int linhas, int colunas){ //Função para limpar/zerar o tabuleiro; 
int i, j;

for(i = 0; i<linhas; i++){
	for(j = 0; j<colunas; j++){
		tabuleiro[i][j] = ' '; 
	}
}
}
