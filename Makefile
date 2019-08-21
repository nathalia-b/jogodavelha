# Makefile for the Image Processing Project
#         made by Sandra Bastos

# phony targets ("recipes" to be executed) 

.PHONY: all, build, clean, folders

# the command "make" will build everything that's in build target

all: build

# "make build" will build all modules

build: folders exe

# "make clean" will delete the objects folder and the executable
# created by "make build" (if it already exists)
# also, the -r flag makes the remove command delete the files
# and their content recursively, while -f will force it to
# ignore nonexistent files and arguments

clean:
	rm -rf objects
	rm -f exe

# "make folders" will create the directory where the compiled
# objects will go to

folders:
	mkdir -p objects

# the next targets are referring to the compilation process 
# of the other .cpp files besides main 

objects/tabuleiro.o: src/tabuleiro.cpp
	g++ src/tabuleiro.cpp -Iinclude -c -o objects/tabuleiro.o

objects/jogo.o: src/jogo.cpp
	g++ src/jogo.cpp -Iinclude -c -o objects/jogo.o

objects/jogador.o: src/jogador.cpp
	g++ src/jogador.cpp -Iinclude -c -o objects/jogador.o

# this target has the instructions needed for the compilation
# of main.cpp and all the objects previously compiled

exe: src/main.cpp objects/tabuleiro.o objects/jogo.o objects/jogador.o 
	g++ src/main.cpp objects/tabuleiro.o objects/jogo.o objects/jogador.o -Iinclude -o exe
