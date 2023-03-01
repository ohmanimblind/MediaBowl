#include <iostream>
#include "../include/Show.h"


Show::Show(string t, string d, double r, int y, vector<string>g ,string di, int rT, vector<string>a)
    :Media(t, d, r, y, g),director(di),runTime(rT),actors(a){}


string Show::getDirector()const{

    return this->director;
}

int Show::getRuntime()const{

    return this->runTime;
}

vector<string> Show::getActors()const{


    return this->actors;
}