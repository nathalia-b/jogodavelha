# Jogo da velha
> Jogo da velha simples desenvolvido em C/C++ para a matéria de Linguagem de Programação I - 2019.2; 

# Para compilar e executar:
> Clone o repositório, vá na pasta e utilize o comando 'make' para gerar o executável. Depois, digite ./exe para executar o programa.
 
```
git clone https://github.com/nathalia-b/jogodavelha
make
./exe

```
# Sobre o programa: 
> 'Tabuleiro' contém as funções:
- Posicionar o 'X' e o 'O' no tabuleiro, além de identificar se a posição escolhida existe e é válida; 
    - Imprimir o tabuleiro antes e depois do jogo;
    - Verificar se o tabuleiro está completo; 
    - Limpar o tabuleiro;

> 'Jogo' contém as funções: 
    - Escolher entre 'X' e 'O';
    - Verificar se há alguém que se encaixe na condição de vencedor, verificando linhas/colunas/diagonais;
    - Imprimir o aviso para dizer que há um ganhador no meio da partida (a partir da jogada 5); 
    - Imprimir quem é o vencedor após o tabuleiro estar completo
    - Controlar jogadas, ou seja, coordenar a ordem das jogadas e imprimir avisos referentes às ações do usuário; 
  
> 'Jogador' contém as funções:
    - Imprimir aviso que indica que é a vez do jogador;
    - Imprimir posições que o jogador ocupa quando ele tenta preencher uma posição já ocupada; 
    - Relembrar o caracter com o qual o usuário está jogando e informar quantas rodadas faltam; 
