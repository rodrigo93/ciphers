/*
 * CifradorCesar.hpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#include <string>
#include <algorithm>

#ifndef INCLUDE_CIFRADORCESAR_HPP_
#define INCLUDE_CIFRADORCESAR_HPP_

class Cifradorcesar {
public:
	Cifradorcesar(int moveAux) : mover(moveAux){}
	~Cifradorcesar(){}

	std::string cifra(std::string mensagem);
	std::string decifra(std::string mensagem);

	void setMover(int moveAux);
	int getDeslocamento();


private:
	int mover;
};



#endif /* INCLUDE_CIFRADORCESAR_HPP_ */
