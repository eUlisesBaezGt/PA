#pragma once
#include "User.h"

class Ing : public User
{
public:
	Ing();
	Ing(int, string, string, string);

	~Ing();
	string get_career();
	string get_prof_id();
	void set_career(string);
	void set_prof_id(string);
private:
	string career_;
	string prof_id_;
};
