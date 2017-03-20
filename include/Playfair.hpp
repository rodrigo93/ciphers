/*
 * Playfair.hpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#ifndef INCLUDE_PLAYFAIR_HPP_
#define INCLUDE_PLAYFAIR_HPP_

#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <iostream>

class Playfair {
public:
	Playfair() : _chave{{'C','O','M','P','U'},
						{'T','A','B','D','E'},
						{'F','G','H','I','K'},
						{'L','N','Q','R','S'},
						{'V','W','X','Y','Z'}}{}
	~Playfair(){}

	void buscaPosicaoLetra(char letra, int& linha, int& coluna);
	char getChar(int row, int column);
	std::string preparaMensagem(std::string msg);

	std::string cifra(std::vector<char> mensagem);
	std::string decifra(std::vector<char> msg);

private:
	char _chave[5][5];
};


#endif /* INCLUDE_PLAYFAIR_HPP_ */

/**
 * Observar cedilha
 */

/**
 * Cifrar:
 * - Retângulo: troca pelos das pontas opostas;
 * - Coluna: troca pelo de baixo;
 * - Linha: troca pelo da direita.
 *
 * Decifrar
 * - Retângulo: troca pelos das pontas opostas;
 * - Coluna: troca pelo de cima;
 * - Linha: troca pelo da esquerda.
 */

/*
 * Para setar a chave:
 * - Separar em dígrafos;
 * 		- Durante a separação, se ambas as letras forem
 * 			iguais, mantêm a primeira letra e adiciona X;
 * 		- I = J;
 */

