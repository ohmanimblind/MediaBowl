#ifndef BOOK_H
#define BOOK_H


class Book:public Media(){

private:
vector <string> _authors;

public: 

vector <string> getAuthors()const;



};

#endif