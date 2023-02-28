#include <iostream>
#include "../include/Show.h"


Show::Show(string t, string d, double r, int y, vector<string>g , vector<string>a,int s)
    :Media(t, d, r, y, g),actors(a),_seasons(s){}


int Show::getSeasons()const{

    return this->_seasons;
}

vector<string> Show::getActors()const{


    return this->actors;
}