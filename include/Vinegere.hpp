/*
 * Vinegere.hpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#ifndef INCLUDE_VINEGERE_HPP_
#define INCLUDE_VINEGERE_HPP_

#include <string>

class Vinegere {
public:
	Vinegere(){}
	~Vinegere(){}


	std::string cifra(std::string mensagem);
	std::string decifra(std::string mensagem);

private:
};



#endif /* INCLUDE_VINEGERE_HPP_ */
