/*
 * Vigenere.cpp
 *
 *  Created on: 15 de mar de 2017
 *      Author: rodrigo
 */

#include "../include/Vigenere.hpp"

std::string Vinegere::cifra(std::string str){
	std::string result;

	for (int i = 0, j = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] += 'A' - 'a';
		} else if (str[i] < 'A' || str[i] > 'Z') {
			continue;
		}
		result += (str[i] + key[j] - 2 * 'A')%26 + 'A';
		j = (j+1)%key.size();
	}
	return result;
}

std::string Vinegere::decifra(std::string str){
	std::string result;

	for (int i = 0, j = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] += 'A' - 'a';
		} else if (str[i] < 'A' || str[i] > 'Z') {
			continue;
		}
		result += (str[i] - key[j] + 26)%26 + 'A';
		j = (j + 1)%key.size();
	}
	return result;
}
