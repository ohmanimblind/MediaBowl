#include <iostream>
#include "Media.h"

using namespace std;

Media::Media(string t , vector <string> d, double r , int y, vector<string> g){

_title = t;
_description  = d;
_rating = r;
_year = y;
_genres  = g;

}

string Media::getTitle()const{


    return _title;
}

vector<string> Media::getGenres()cosnt{

    return _genres;
}

int Media::getYear()const{

    return _year;
}

string Media::getDescription()const{

    return _description;
}