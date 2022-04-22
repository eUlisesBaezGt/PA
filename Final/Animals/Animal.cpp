#include <string>
#include "Animal.h"

Animal::Animal()
{
	name = "";
	_id = -1;
	_age = -0.0f;
	_color = "";
	_weight = -0.0f;
	_gender = ' ';
}

Animal::Animal(int id_, std::string name_, float age_, float weight_, std::string color_, char gender_)
{
	this->_id = id_;
	this->name = name_;
	this->_age = age_;
	this->_weight = weight_;
	this->_color = color_;
	this->_gender = gender_;
}

// new style
// using _att for privates
// using var_ fir temporal
// this->_att = var_
