/*
 * Playfair.hpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#ifndef INCLUDE_PLAYFAIR_HPP_
#define INCLUDE_PLAYFAIR_HPP_

#include <string>

class Playfair {
public:
	Playfair(){}
	~Playfair(){}

	std::string cifra(std::string mensagem);
	std::string decifra(std::string mensagem);

private:
};


#endif /* INCLUDE_PLAYFAIR_HPP_ */
