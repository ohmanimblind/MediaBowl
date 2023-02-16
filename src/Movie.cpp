#include <iostream>
#include "Movie.h"



Movie::Movie(string di , int rT, vector<string> a, string t , vector <string> d, double r , int y, vector<string> g )
:Media(  t , d,  r ,  y,  g ),_directors(di),_runtime(rT),_actors(a){}


string Movie::getDirector()const{

return _directors;

}

vector <string> Movie::getActors()const{


    return _actors;
}

int Movie::getRuntime()const{

    return _runtime;
}