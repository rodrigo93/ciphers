/*
 * Playfair.cpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#include "../include/Playfair.hpp"


std::string Playfair::cifra(std::vector<char> msg){
	std::vector<char> mensagem = msg;
	std::string msgCifrada = "";

    int h = 0;
    int linha1 = 0, coluna1 = 0, linha2 = 0, coluna2 = 0;

	for (h = 0; h < mensagem.size(); h += 2){
		buscaPosicaoLetra(mensagem[h], linha1, coluna1);
		buscaPosicaoLetra(mensagem[h+1], linha2, coluna2);

		if (linha1 == linha2){
			msgCifrada += getChar(linha1, coluna2 + 1);
			msgCifrada += getChar(linha2, coluna2 + 1);
		}

		else if (coluna1 == coluna2){
			msgCifrada += getChar(linha1 + 1, coluna1);
			msgCifrada += getChar(linha2 + 1, coluna1);
		}

		else{
			msgCifrada += getChar(linha1, coluna2);
			msgCifrada += getChar(linha2, coluna1);
		}
	}

    return msgCifrada;
}

std::string Playfair::decifra(std::vector<char> msg){
	std::vector<char> mensagem = msg;
	std::string msgCifrada = "";

    int h = 0;
    int linha1 = 0, coluna1 = 0, linha2 = 0, coluna2 = 0;

	for (h = 0; h < mensagem.size(); h += 2){
		buscaPosicaoLetra(mensagem[h], linha1, coluna1);
		buscaPosicaoLetra(mensagem[h+1], linha2, coluna2);

		if (linha1 == linha2){
			msgCifrada += getChar(linha1, coluna2 - 1);
			msgCifrada += getChar(linha2, coluna2 - 1);
		}

		else if (coluna1 == coluna2){
			msgCifrada += getChar(linha1 - 1, coluna1);
			msgCifrada += getChar(linha2 - 1, coluna1);
		}

		else{
			msgCifrada += getChar(linha1, coluna2);
			msgCifrada += getChar(linha2, coluna1);
		}
	}

    return msgCifrada;
}


void Playfair::buscaPosicaoLetra(char letra, int& linha, int& coluna){
	for (int i = 0; i < 5; i++)	{
		for (int j = 0; j < 5; j++){
			if (_chave[i][j] == letra){
				linha = i;
				coluna = j;
			}
		}
	}
}

char Playfair::getChar(int row, int column)
{
	return _chave[(row + 5) % 5][(column + 5) % 5];
}

std::string Playfair::preparaMensagem(std::string msg){
	std::string mesAux;
	char filler;
	int testfillq = 0;
	int testfillx = 0;
	int testfillz = 0;

	for (int i = 0; i < msg.length(); i++){

		if (msg[i] == ' ')		//remove espaços.
			msg.erase(i, 1);
	}


	for (int i = 0; i < msg.length(); i++){

		if (msg[i] == 'q')
			testfillq = 1;
		if (msg[i] == 'x')
			testfillx = 1;
        if (msg[i] == 'z')
			testfillz = 1;
	}

	if (testfillx == 0)
		filler = 'x';
	else if (testfillz == 0)
		filler = 'z';
	else if (testfillq == 0)
		filler = 'q';

	for (int i = 0; i < msg.length(); i+=2){

		mesAux += msg[i];

			if (i + 1 < msg.length())
			{
				if (msg[i] == msg[i + 1])
				{
					mesAux += filler;
				}
				mesAux += msg[i + 1];
			}
		}

	if (mesAux.length() % 2 == 1)
		mesAux += filler;

	msg = mesAux;
	return msg;
}
