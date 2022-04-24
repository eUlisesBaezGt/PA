#include "Dog.h"

#include <utility>


Dog::Dog(int id_, std::string name_, char gender_, float age_, float weight_, std::string color_, std::string breed_,
         bool tail_) : Animal{id_, name_, gender_, age_, weight_, color_}
{
	_breed = std::move(breed_);
	_tail = tail_;
}


Dog::Dog() : Animal{}
{
	_breed = " ";
	_tail = false;
}

Dog::~Dog()
= default;

Dog::Dog(Animal animal, std::string breed_, bool tail_) : Anima
{
	set_id(animal.get_id());
	set_name(animal.get_name());
	set_gender(animal.get_gender());
	set_age(animal.get_age());
	set_weight(animal.get_weight());
	set_color(animal.get_color());
	this->_breed = std::move(breed_);
	this->_tail = tail_;
}

//
//Dog::Dog(Animal, std::string breed_, bool tail_)
//{
//	this->_breed = move(breed_);
//	this->_tail = tail_;
//}


//Dog::Dog(const int id_, std::string name_, float age_, float weight_, std::string color_, char gender_,
//	std::string breed_,
//	const bool tail_, bool ears_) : Animal(id_, move(name_), age_, weight_, move(color_), gender_)
//{
//	breed = move(breed_);
//	tail = tail_;
//	ears = ears_;
//}
