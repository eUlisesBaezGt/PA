#include "Dog.h"

#include <iostream>
#include <utility>

Dog::Dog() : Animal()
{
	this->set_id(-1);
	this->set_name(" ");
	this->set_gender(' ');
	this->set_age(-0.0f);
	this->set_weight(-0.0f);
	this->set_color(" ");

	this->set_breed(" ");
	this->set_tail("N");
}

Dog::~Dog()
= default;

Dog::Dog(Animal animal, std::string breed_, std::string tail_) : Animal{
	animal.get_id(), animal.get_name(), animal.get_gender(), animal.get_age(), animal.get_weight(), animal.get_color()
}
{
	this->_breed = std::move(breed_);
	set_tail(tail_);
}


Dog::Dog(int id_, std::string name_, char gender_, float age_, float weight_, std::string color_, std::string breed_,
         std::string tail_) : Animal{id_, name_, gender_, age_, weight_, color_}
{
	this->_breed = std::move(breed_);
	set_tail(tail_);
}


std::string Dog::get_breed() { return _breed; }

void Dog::set_breed(std::string breed_) { this->_breed = breed_; }

std::string Dog::get_tail()
{
	std::string tail;
	if (this->_tail)
		tail = "yes";
	else if (!this->_tail)
		tail = "no";
	else tail = " ";
	return tail;
}

void Dog::set_tail(std::string tail_)
{
	if (tail_ == "Y")
		this->_tail = true;
	else if (tail_ == "N")
		this->_tail = false;
	else std::cout << "Invalid input for tail." << std::endl;
}

void Dog::printdog()
{
	std::cout << "ID: " << get_id() << "\t";
	std::cout << "Name: " << get_name() << "\t";
	std::cout << "Gender: " << get_gender() << "\t";
	std::cout << "Age: " << get_age() << "\t";
	std::cout << "Weight: " << get_weight() << "\t";
	std::cout << "Color: " << get_color() << "\t";
	std::cout << "Breed: " << get_breed() << "\t";
	std::cout << "Tail: " << get_tail() << "\n";
}
