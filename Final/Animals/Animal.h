#pragma once
#include <string>

class Animal
{
private:
	int _id;
	float _age{};
	std::string _color;
	float _weight{};
	char _gender{};

public:
	std::string name;
	Animal();
	Animal(int, std::string, float, float, std::string, char);
};
