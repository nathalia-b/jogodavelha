#ifndef TABULEIRO_HEADER
#define TABULEIRO_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void imprimirTabuleiro(char **tabuleiro, int linhas, int colunas, int preg); //IMPRIME O TABULEIRO 	
int completo(char **tabuleiro, int linhas, int colunas);	//VERIFICA SE O TABULEIRO ESTÁ COMPLETO OU NÃO
void limpar_tabuleiro(char **tabuleiro, int linhas, int colunas);	//ZERA O TABULEIRO.
void jogada(char **tabuleiro, int linhas, int colunas, char j, int jj, int *preg); //POSICIONA X E O E IDENTIFICA SE A POSIÇÃO JÁ ESTÁ OCUPADA


#endif
