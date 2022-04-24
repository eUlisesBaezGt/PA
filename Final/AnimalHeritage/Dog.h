#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(Animal, std::string, std::string);
	Dog(int, std::string, char, float, float, std::string, std::string, std::string);

	std::string get_breed();
	void set_breed(std::string);

	std::string get_tail();
	void set_tail(std::string);

private:
	std::string _breed;
	bool _tail;
};
