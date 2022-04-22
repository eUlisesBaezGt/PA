#pragma once
#include <string>

using namespace std;

class User
{
private:
	int id_; // variable_ for class privates
	string name_;

public:
	User(); // general constructor
	User(int, string); // constructor with parameters
	~User(); // destructor
	int get_id() const; // getter for id_
	string get_name(); // getter for name_
	void set_id(int); // setter for id_
	void set_name(const string&); // setter for name_
};
