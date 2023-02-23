#include <iostream>
#include "include/Book.h"


Book::Book(string t, string d, double r, int y, vector<string>g , vector<string>a)
    :Media(t, d, r, y, g),authors(a){}

vector<string> Book::getAuthor()const{


    return this->authors;
}