#include "Book.h"


Book::Book(string t , string d, double r , int y, vector<string> g
,vector<string> _au):Media(t , d , r , y , g), _authors(a){}


vector <string> Book::getAuthors()const{
return _authors;

}