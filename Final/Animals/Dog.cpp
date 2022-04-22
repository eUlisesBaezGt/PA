#include "Dog.h"

#include <utility>

Dog::Dog(): Animal{}
{
	breed = "";
	tail = false;
	ears = false;
}

Dog::Dog(int id_, std::string name_, float age_, float weight_, std::string color_, char gender_, std::string breed_,
         bool tail_, bool ears_) : Animal(id_, move(name_), age_, weight_, move(color_), gender_)
{
	breed = breed_;
	tail = tail_;
	ears = ears_;
}
