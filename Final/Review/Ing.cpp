#include "Ing.h"

#include <utility>
// constructor and destructor

Ing::Ing() : User{}
{
	career_ = "";
	prof_id_ = "";
}

Ing::Ing(int id, string name, string career, string prof_id) : User{id, std::move(name)}
{
	career_ = career;
	prof_id_ = prof_id;
}

Ing::~Ing()
{
}

string Ing::get_career()
{
	return career_;
}

string Ing::get_prof_id()
{
	return prof_id_;
}

void Ing::set_career(string career)
{
	career_ = career;
}

void Ing::set_prof_id(string prof_id)
{
	prof_id_ = prof_id;
}
