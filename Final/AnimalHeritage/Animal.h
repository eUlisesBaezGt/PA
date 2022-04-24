#pragma once
#include <string>

class Animal
{
public:
	Animal();
	~Animal();
	Animal(int, std::string, char, float, float, std::string);

	int get_id();
	void set_id(int);

	std::string get_name();
	void set_name(std::string);

	char get_gender();
	void set_gender(char);

	float get_age();
	void set_age(float);

	float get_weight();
	void set_weight(float);

	std::string get_color();
	void set_color(std::string);


private:
	int _id;
	std::string _name;
	char _gender;
	float _age;
	float _weight;
	std::string _color;
};
