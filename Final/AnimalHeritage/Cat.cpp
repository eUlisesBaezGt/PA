#include "Cat.h"

#include <iostream>
#include <utility>

Cat::Cat() : Animal()
{
	this->set_id(-1);
	this->set_name(" ");
	this->set_gender(' ');
	this->set_age(-0.0f);
	this->set_weight(-0.0f);
	this->set_color(" ");

	this->set_breed(" ");
	this->set_whiskers(0);
}

Cat::~Cat()
= default;

Cat::Cat(Animal animal, std::string breed_, int whiskers_) : Animal{
	animal.get_id(), animal.get_name(), animal.get_gender(), animal.get_age(), animal.get_weight(), animal.get_color()
}
{
	this->_breed = std::move(breed_);
	set_whiskers(whiskers_);
}


Cat::Cat(int id_, std::string name_, char gender_, float age_, float weight_, std::string color_, std::string breed_,
         int whiskers_) : Animal{id_, name_, gender_, age_, weight_, color_}
{
	this->_breed = std::move(breed_);
	set_whiskers(whiskers_);
}


std::string Cat::get_breed() { return _breed; }

void Cat::set_breed(std::string breed_) { this->_breed = breed_; }

int Cat::get_whiskers() { return _whiskers; }

void Cat::set_whiskers(int whiskers_) { this->_whiskers = whiskers_; }

void Cat::printcat()
{
	std::cout << "ID: " << get_id() << "\t";
	std::cout << "Name: " << get_name() << "\t";
	std::cout << "Gender: " << get_gender() << "\t";
	std::cout << "Age: " << get_age() << "\t";
	std::cout << "Weight: " << get_weight() << "\t";
	std::cout << "Color: " << get_color() << "\t";
	std::cout << "Breed: " << get_breed() << "\t";
	std::cout << "Whiskers: " << get_whiskers() << "\n";
}
