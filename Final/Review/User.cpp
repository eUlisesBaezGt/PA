#include "User.h"

User::User() : id_(-1) // default constructor
{
}

User::User(const int id, string name) : id_(id), name_(move(name)) // constructor with parameters
{
}

User::~User() = default;

int User::get_id() const { return id_; } // getter for id_

string User::get_name() { return name_; }

void User::set_id(const int id) { id_ = id; } // setter for id_

void User::set_name(const string& name) { name_ = name; }
