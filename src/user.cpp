#include "../include/user.hpp"

User::User(std::string _name,std::string _surname):name(_name),surname(_surname){};

std::string User::getName(){return name;};

std::string User::getSurname(){return surname;};