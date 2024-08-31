#include "../include/book.hpp"

Book::Book(std::string _title,std::string _author,int _year):title(_title),author(_author),year(_year){};

std::string Book::getTitle(){return title;};

std::string Book::getAuthor(){return author;};

int Book::getYear(){return year;};