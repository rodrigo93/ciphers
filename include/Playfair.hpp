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

class Playfair {
public:
	Playfair(){}
	~Playfair(){}

	void cifra(std::vector<char> mensagem);
	void decifra(std::string mensagem);

	void retangulo(int linha1, int coluna1, std::vector<char>& mensagem, int linha2, int coluna2);
	void linha(int linha, std::vector<char>& mensagem, int coluna1, int coluna2);
	void coluna(int coluna, std::vector<char>& mensagem, int linha1, int linha2);
	void buscaPosicaoLetra(char letra, int& linha, int& coluna);
	void pedeMensagem(std::vector<char>& mensagem);

private:
	char _chave[5][5] = {
			{'C','O','M','P','U'},
			{'T','A','B','D','E'},
			{'F','G','H','I','K'},
			{'L','N','Q','R','S'},
			{'V','W','X','Y','Z'}
	};
};


#endif /* INCLUDE_PLAYFAIR_HPP_ */

/**
 * Observar cedilha
 */

/**
 * Cifrar:
 * - Retângulo: troca pelos das pontas opostas;
 * - Coluna: troca pelo de baixo;
 * - Linha: troca pelo da direita, quando não der,
 * 			troca pelo da esquerda;
 *
 * Decifrar
 * - Retângulo: troca pelos das pontas opostas;
 * - Coluna: troca pelo de cima;
 * - Linha: troca pelo da esquerda, quando não der,
 * 			troca pelo da direita;
 */

/*
 * Para setar a chave:
 * - Separar em dígrafos;
 * 		- Durante a separação, se ambas as letras forem
 * 			iguais, mantêm a primeira letra e adiciona X;
 * 		- I = J;
 */

