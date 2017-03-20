/*
 * Auxiliar.hpp
 *
 *  Created on: 20 de mar de 2017
 *      Author: rodrigo
 */

#ifndef INCLUDE_AUXILIAR_HPP_
#define INCLUDE_AUXILIAR_HPP_

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class Auxiliar {
public:
	Auxiliar(){}
	~Auxiliar(){}

	std::vector<char> toCharVector(std::string mensagem);
	std::string toString(std::vector<char> mensagem);
	void printCharVector(std::vector<char> msg);

private:
};


#endif /* INCLUDE_AUXILIAR_HPP_ */
