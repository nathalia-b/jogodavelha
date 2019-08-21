#ifndef JOGO_HEADER
#define JOGO_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//O módulo Jogo deve iniciar o jogo, escolher os jogadores, controla as rodadas, verificar se houve ganhador.

void escolherJogador(char *j1, char *j2); //O JOGADOR ESCOLHE SE FICARÁ COM X OU O
int verificando_vencedor(char **t, char j1, char j2, char *win); //VERIFICA SE HÁ UM VENCEDOR
void ganhou(char j, int jj, int jjj);	//IMPRIME AVISO PARA DIZER QUE O JOGADOR Y GANHOU
void controla_rodadas(char **tabuleiro, int linhas, int colunas, int preg, char j1, char j2, int jj1, int jj2, char win); //CONTROLA AS RODADAS [QUEM JOGA PRIMEIRO, QUEM JOGA DEPOIS, ETC]


#endif
