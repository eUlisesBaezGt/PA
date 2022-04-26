#pragma once
#include <string>
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(Animal, std::string, int);
	Cat(int, std::string, char, float, float, std::string, std::string, int);
	void printcat();

	std::string get_breed();
	void set_breed(std::string);

	int get_whiskers();
	void set_whiskers(int);

private:
	std::string _breed;
	int _whiskers;
};
