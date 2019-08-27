#ifndef JOGO_HEADER
#define JOGO_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void escolherJogador(char *j1, char *j2); //O JOGADOR ESCOLHE SE FICARÁ COM X OU O
int verificando_vencedor(char **t, char j1, char j2, char *win); //VERIFICA SE HÁ ALGUÉM QUE SE ENCAIXE NA CONDIÇÃO DE VENCEDOR
void ganhou_meio(char j, int jj, int jjj);	//IMPRIME AVISO PARA DIZER QUE O JOGADOR Y GANHOU NO MEIO DA PARTIDA
void ver_vencedor(int win, int j1, int j2); //ÚLTIMA VERIFICAÇÃO DE VENCEDOR, APÓS TABULEIRO COMPLETO;
void controla_rodadas(char **tabuleiro, int linhas, int colunas, int preg, char j1, char j2, int jj1, int jj2, char win); //CONTROLA AS RODADAS [QUEM JOGA PRIMEIRO, QUEM JOGA DEPOIS, ETC]


#endif
