#ifndef JOGO_HEADER
#define JOGO_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//O módulo Jogo deve iniciar o jogo, escolher os jogadores, controla as rodadas, verificar se houve ganhador.

void escolherJogador(char *j1, char *j2);
void jogada(char **tabuleiro, int linhas, int colunas, char j, int jj, int *preg); 
int verificando_vencedor(char **t, char j1, char j2, char *win);
void ganhou(char j, int jj, int jjj);
void controla_rodadas(char **tabuleiro, int linhas, int colunas, int preg, char j1, char j2, int jj1, int jj2, char win);


#endif
