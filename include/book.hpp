#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book{
    std::string title; //Book title
    std::string author; //Author of the book
    int year; // Year when the book was created
    Book(std::string,std::string author,int);
    Book()=delete; 
    std::string getTitle();
    std::string getAuthor();
    int geYear();
};

#endif