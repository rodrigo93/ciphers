/*
 * main.cpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 *     	Github: https://github.com/rodrigo93/INE5429-Trabalho1
 */

#include <iostream>
#include <string>
#include <vector>
#include "include/Cifradorcesar.hpp"
#include "include/Playfair.hpp"
#include "include/Vinegere.hpp"

//Variaveis globais
std::string Mateus = Mateus;
std::string Rodrigo = Rodrigo;

Cifradorcesar * cesar = new Cifradorcesar(0);
Playfair * playfair;
Vinegere * vinegere;

std::vector<char> toCharVector(std::string mensagem){
	transform(mensagem.begin(), mensagem.end(), mensagem.begin(), ::toupper);
	std::vector<char> newMensagem;
	std::copy(mensagem.c_str(), mensagem.c_str()+mensagem.length(), newMensagem);
	return newMensagem;
}

std::string toString(std::vector<char> mensagem){
	std::string str(mensagem.begin(),mensagem.end());
	return str;
}

void printCharVector(std::vector<char> msg){
    for (int j = 0;j < msg.size();j++)
    {
        if (msg[j] == 'X')
        continue;
        std::cout<<msg[j];
    }
}

int main(int argc, char **argv) {
	std::string a = "a";

	std::cout << "Entrada" << std::endl;

	std::string mensagem = "Hide the gold in the tree stump";
	std::vector<char> msgAux = toCharVector(mensagem);
	printCharVector(msgAux);

	playfair->cifra(msgAux);
	std::cout << "Saida" << std::endl;

	std::cout << "Fim." << std::endl;
	return 0;
}



