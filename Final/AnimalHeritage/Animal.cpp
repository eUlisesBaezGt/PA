#include "Animal.h"

#include <iostream>

Animal::Animal()
{
	_id = -1;
	_name = " ";
	_gender = ' ';
	_age = -0.0f;
	_weight = -0.0f;
	_color = " ";
}

Animal::~Animal()
= default;

Animal::Animal(int id_, std::string name_, char gender_, float age_, float weight_, std::string color_)
{
	this->_id = id_;
	this->_name = name_;
	this->_gender = gender_;
	this->_age = age_;
	this->_weight = weight_;
	this->_color = color_;
}

int Animal::get_id() { return _id; }

void Animal::set_id(int id_) { this->_id = id_; }

std::string Animal::get_name() { return _name; }

void Animal::set_name(std::string name_) { this->_name = move(name_); }

char Animal::get_gender() { return _gender; }

void Animal::set_gender(char gender_) { this->_gender = gender_; }

float Animal::get_age() { return _age; }

void Animal::set_age(float age_) { this->_age = age_; }

float Animal::get_weight() { return _weight; }

void Animal::set_weight(float weight_) { this->_weight = weight_; }

std::string Animal::get_color() { return _color; }

void Animal::set_color(std::string color_) { this->_color = std::move(color_); }

void Animal::print()
{
	std::cout << "ID: " << _id << "\t";
	std::cout << "Name: " << _name << "\t";
	std::cout << "Gender: " << _gender << "\t";
	std::cout << "Age: " << _age << "\t";
	std::cout << "Weight: " << _weight << "\t";
	std::cout << "Color: " << _color << "\n";
}
