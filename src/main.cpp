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
#include "../include/Auxiliar.hpp"
#include "../include/Vigenere.hpp"

Cifradorcesar * cesar = new Cifradorcesar(3);
Playfair * playfair = new Playfair();
Vinegere * vinegere = new Vinegere("SKYHILL");
Auxiliar * auxiliar = new Auxiliar();

int main(int argc, char **argv) {
	//Cesar
	std::cout << "Cifra de Cesar:" << std::endl;
	std::cout << "Numero de casa de deslocamento: " << cesar->getDeslocamento() << std::endl;
	std::cout << "Nomes a serem Cifrados:" << std::endl;
	std::string mtCesar = "MATEUS";
	std::string rdCesar = "RODRIGO";
	std::cout << mtCesar << std::endl;
	std::cout << rdCesar << std::endl;

	std::string mtCesarCifrado = cesar->cifra(mtCesar);
	std::string rdCesarCifrado = cesar->cifra(rdCesar);
	std::cout << "MATEUS Cifrado:" << std::endl;
	std::cout << mtCesarCifrado << std::endl;
	std::cout << "RODRIGO Cifrado:" << std::endl;
	std::cout << rdCesarCifrado << std::endl;

	std::string mtCesarDecifrado = cesar->decifra(mtCesarCifrado);
	std::string rdCesarDecifrado = cesar->decifra(rdCesarCifrado);
	std::cout << mtCesarCifrado << " Decifrada:" << std::endl;
	std::cout << mtCesarDecifrado << std::endl;
	std::cout << rdCesarCifrado << " Decifrada:" << std::endl;
	std::cout << rdCesarDecifrado << std::endl;

	//PlayFair
	std::cout << "PlayFair:" << std::endl;
	std::string mtPlayFair = "MATEUS";
	std::string rdPlayFair = "RODRIGO";

	std::string mtAux = playfair->preparaMensagem(mtPlayFair);
	std::string rdAux = playfair->preparaMensagem(rdPlayFair);


	std::vector<char> mtAuxVec = auxiliar->toCharVector(mtAux);
	std::vector<char> rdAuxVec = auxiliar->toCharVector(rdAux);

	std::string mtCifrada = playfair->cifra(mtAuxVec);
	std::cout << mtPlayFair << " Cifrada:" << std::endl;
	std::cout << mtCifrada << std::endl;

	std::string rdCifrada = playfair->cifra(mtAuxVec);
	std::cout << rdPlayFair << " Cifrada:" << std::endl;
	std::cout << rdCifrada << std::endl;

	std::vector<char> mtDecifradaAux = auxiliar->toCharVector(mtCifrada);
	std::string mtDecifrada = playfair->decifra(mtDecifradaAux);
	std::cout << "Mensagem Decifrada:" << std::endl;
	std::cout << mtDecifrada << std::endl;

	std::vector<char> rdDecifradaAux = auxiliar->toCharVector(rdCifrada);
	std::string rdDecifrada = playfair->decifra(rdDecifradaAux);
	std::cout << "Mensagem Decifrada:" << std::endl;
	std::cout << rdDecifrada << std::endl;

	//Vigenere
	std::cout << "Vigenere:" << std::endl;
	std::string key = "SKYHILL";
	std::string mt = "MATEUS";
	std::string rd = "RODRIGO";

	std::string mtEncrypted = vinegere->cifra(mt);
	std::string rdEncrypted = vinegere->cifra(rd);

	std::string mtDecrypted = vinegere->decifra(mtEncrypted);
	std::string rdDecrypted = vinegere->decifra(rdEncrypted);

	std::cout << "Chave usada: "<<key << std::endl;
	std::cout << mt << std::endl;
	std::cout << "Mateus Encrypted: " << mtEncrypted << std::endl;
	std::cout << "Mateus Decrypted: " << mtDecrypted << std::endl;
	std::cout << rd << std::endl;
	std::cout << "Rodrigo Encrypted: " << rdEncrypted << std::endl;
	std::cout << "Rodrigo Decrypted: " << rdDecrypted << std::endl;
	return 0;
}



