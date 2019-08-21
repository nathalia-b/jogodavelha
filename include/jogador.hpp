#ifndef JOGADOR_HEADER
#define JOGADOR_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void aviso(int jj); 
void status(char **tabuleiro, int linhas, int aux, int colunas, char jx);
void lembrete(int jj, char j, char **tabuleiro, int linhas, int colunas, int preg);


//O módulo Jogador deve conter as informações do jogador, retornar se o 
//jogador fez alguma jogada errada, informar que se encontra na vez do jogador.
#endif
