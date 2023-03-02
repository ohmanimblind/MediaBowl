#include <iostream>
#include "../include/Show.h"


Show::Show(string t, string d, double r, int y, vector<string>g ,string di, string rT, vector<string>a)
    :Media(t, d, r, y, g),director(di),runTime(rT),actors(a){}


string Show::getDirector()const{

    return this->director;
}

string Show::getRuntime()const{

    return this->runTime;
}

vector<string> Show::getActors()const{


    return this->actors;
}