#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <vector>


class User{
    std::string name;
    std::string surname;
    public:
    User(std::string,std::string);
    User() = delete;
    std::string getName();
    std::string getSurname();
};

#endif