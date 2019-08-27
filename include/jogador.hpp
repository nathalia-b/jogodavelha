#ifndef JOGADOR_HEADER
#define JOGADOR_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void aviso(int jj); //IMPRIME AVISO PARA DIZER QUE É A VEZ DO JOGADOR;
void status(char **tabuleiro, int linhas, int aux, int colunas, char jx); /*INFORMA QUAIS POSIÇÕES O JOGADOR OCUPA ATUALMENTE SE ELE TENTAR PREENCHER UMA POSIÇÃO JÁ OCUPADA*/
void lembrete(int jj, char j, char **tabuleiro, int linhas, int colunas, int preg); /* INFORMA QUANTAS RODADAS FALTAM PRA ACABAR O JOGO*/ 


#endif
