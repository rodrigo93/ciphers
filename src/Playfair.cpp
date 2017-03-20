/*
 * Playfair.cpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#include "../include/Playfair.hpp"


void Playfair::cifra(std::vector<char> mensagem){
    std::vector<char> aux;
    int tamMsg = mensagem.size();

    int i = 0;
    int r1, c1, r2, c2;
    while (i < tamMsg){
    	buscaPosicaoLetra(mensagem[i], r1, c1);
        i++;
        buscaPosicaoLetra(mensagem[i], r2, c2);
        if (r1 == r2){
        	linha(r1, aux, c1, c2);
        }
        else if (c1 == c2){
        	coluna(c1, aux, r1, r2);
        }
        else{
        	retangulo(r1, c1, aux, r2, c2);
        }
        i++;
    }

    return;
}

void Playfair::decifra(std::string mensagem){

	return;
}

void Playfair::retangulo(int linha1, int coluna1, std::vector<char>& mensagem, int linha2, int coluna2){
	mensagem.push_back(_chave[linha1][coluna2]);
	mensagem.push_back(_chave[linha2][coluna1]);
	return;
}

void Playfair::linha(int linha, std::vector<char>& mensagem, int coluna1, int coluna2){
	mensagem.push_back(_chave[linha][(coluna1 + 4) % 5]);
	mensagem.push_back(_chave[linha][(coluna2 + 4) % 5]);
    return;
}

void Playfair::coluna(int coluna, std::vector<char>& mensagem, int linha1, int linha2){
	mensagem.push_back(_chave[(linha1 + 4) % 5][coluna]);
	mensagem.push_back(_chave[(linha2 + 4) % 5][coluna]);
    return;
}

void buscaPosicaoLetra(char letra, int& linha, int& coluna){
    if (letra < 'J')
    {
    	linha = (letra - 65) / 5;
    	coluna = (letra - 65) % 5;
    }
    else if (letra > 'J')
    {
    	linha = (letra - 66) / 5;
    	coluna = (letra - 66) % 5;
    }
    return;
}

void Playfair::pedeMensagem(std::vector<char>& mensagem){
    char letra;
    while (1) {
    	letra=getchar();
        if (letra >= 97 && letra <= 122)
        	letra -= 32;
        if (letra == '\n')
            break;
        else if (letra==' ')
            continue;
        else if (letra == 'J')
        mensagem.push_back('I');
        mensagem.push_back(letra);
    }
    return;
}
