#include <iostream>
#include "../include/Book.h"


Book::Book(string t, string d, double r, int y, vector<string>g , vector<string>a)
:Media(t, d, r, y, g),authors(a){}

vector<string> Book::getAuthors()const{
    
    
    return this->authors;
}

void Book::displayGenres(){
    
    vector<string> g = this->getGenres();
    
    for(int i = 0; i < g.size() ; ++i){
        if(i != 0){
            cout << ", ";
        }
        cout << g.at(i);
        
    }
}

void Book::displayAuthors(){
    for (int i = 0; i < authors.size(); ++i){
        if(i != 0){
            cout << ", ";
        }
        cout << authors.at(i);
    }
}


