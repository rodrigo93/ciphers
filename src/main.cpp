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
#include "../include/Cifradorcesar.hpp"
#include "../include/Playfair.hpp"
#include "../include/Vinegere.hpp"
#include "../include/Auxiliar.hpp"


//Variaveis globais
std::string mateus = "MATEUS";
std::string rodrigo = "RODRIGO";

Cifradorcesar * cesar = new Cifradorcesar(0);
Playfair * playfair = new Playfair();
Vinegere * vinegere = new Vinegere;
Auxiliar * auxiliar = new Auxiliar();

int main(int argc, char **argv) {
	std::string a = "a";

	std::cout << "Entrada" << std::endl;

	std::string mensagem = "Hide the gold in the tree stump";
//	std::string mensagem = rodrigo;
	mensagem = playfair->preparaMensagem(mensagem);
	std::cout << mensagem << std::endl;


	std::vector<char> msgAux = auxiliar->toCharVector(mensagem);

	std::string msgCifrada = playfair->cifra(msgAux);
	std::cout << "Mensagem Cifrada:" << std::endl;
	std::cout << msgCifrada << std::endl;

	std::vector<char> msgDecifradaAux = auxiliar->toCharVector(msgCifrada);
	std::string msgDecifrada = playfair->decifra(msgDecifradaAux);
	std::cout << "Mensagem Decifrada:" << std::endl;
	std::cout << msgDecifrada << std::endl;

	std::cout << "Fim." << std::endl;
	return 0;
}



