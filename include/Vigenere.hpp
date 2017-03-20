/*
 * Vigenere.hpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#ifndef INCLUDE_VIGENERE_HPP_
#define INCLUDE_VIGENERE_HPP_

#include <string>

class Vinegere {
public:
	Vinegere(std::string keyword) {
		for (int i = 0; i < keyword.size(); i++) {
			if (keyword[i] >= 'A' && keyword[i] <= 'Z') {
				this->key += keyword[i];
			} else if (keyword[i] >= 'a' && keyword[i] <= 'z'){
				this->key += keyword[i] + 'A' - 'a';
			}
		}
	}
	~Vinegere(){}


	std::string cifra(std::string mensagem);
	std::string decifra(std::string mensagem);

private:
	std::string key;
};



#endif /* INCLUDE_VIGENERE_HPP_ */
