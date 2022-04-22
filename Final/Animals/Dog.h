#pragma once
#include "Animal.h"

class Dog : public Animal
{
	std::string breed;
	bool tail;
	bool ears;
	Dog();
	Dog(int, std::string, float, float, std::string, char, std::string, bool, bool);
};
