#include <iostream>
#include "../include/Movie.h"



Movie::Movie( string t, string d, double r, int y, vector<string> g, string di, string rT, vector<string> a)
    :Media(t, d, r, y, g), _directors(di), _runTime(rT), _actors(a) {}


string Movie::getDirector()const {

    return _directors;

}

vector <string> Movie::getActors()const {


    return _actors;
}

string Movie::getRuntime()const {

    return _runTime;
}