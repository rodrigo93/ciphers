/*
 * Auxiliar.cpp
 *
 *  Created on: 20 de mar de 2017
 *      Author: rodrigo
 */

#include "../include/Auxiliar.hpp"

std::vector<char> Auxiliar::toCharVector(std::string mensagem){
	std::string msg = mensagem;
	transform(msg.begin(), msg.end(), msg.begin(), ::toupper);
	std::vector<char> newMensagem(msg.begin(), msg.end());
	return newMensagem;
}

std::string Auxiliar::toString(std::vector<char> mensagem){
	std::string str(mensagem.begin(),mensagem.end());
	return str;
}

void Auxiliar::printCharVector(std::vector<char> msg){
    for (int j = 0;j < msg.size();j++)
    {
        if (msg[j] == 'X')
        continue;
        std::cout<<msg[j];
    }
    std::cout << "" << std::endl;
    return;
}


