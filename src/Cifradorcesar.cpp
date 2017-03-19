/*
 * Cifradorcesar.cpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#include "../include/Cifradorcesar.hpp"

void Cifradorcesar::setMover(int moveAux){
	this->mover = moveAux;
}

std::string Cifradorcesar::cifra(std::string mensagem){
	std::string temp = mensagem;
	transform(temp.begin(), temp.end(), temp.begin(), ::toupper);

	for (int i = 0; i < temp.length(); i++) {
		if(isalpha(temp[i])){
			temp[i] = int(temp[i]+ mover -65)%26 +65;
		}

	}

	return temp;
}

std::string Cifradorcesar::decifra(std::string mensagem){
	transform(mensagem.begin(), mensagem.end(), mensagem.begin(), ::toupper);
	std::string temp = mensagem;

	for (int i = 0; i < temp.length(); i++) {
		if(isalpha(temp[i])){
			temp[i] = int(temp[i] - mover -65)%26 + 65;
		}

	}

	return temp;
}
