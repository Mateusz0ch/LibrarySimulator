#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "book.hpp"
#include "user.hpp"

class Library{
    std::vector<Book*>books;
    std::vector<User*>users;
    std::string name;
    public:
    Library(std::string);
};

#endif