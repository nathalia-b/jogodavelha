#ifndef TABULEIRO_HEADER
#define TABULEIRO_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void imprimirTabuleiro(char **tabuleiro, int linhas, int colunas, int preg); 
int completo(char **tabuleiro, int linhas, int colunas);
void limpar_tabuleiro(char **tabuleiro, int linhas, int colunas);


//O módulo Tabuleiro deve ser responsável por criar o tabuleiro, zerar o tabuleiro, 
//verificar se o tabuleiro está completo, posicionar os X e 0 e verificar se a casa do tabuleiro já se encontra ocupada.

#endif
