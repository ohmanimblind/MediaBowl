#ifndef MOVIE_H
#define MOVIE_H
#include "Media.h"


class Movie:public Media(){
private:

vector <string> _directors;
vector <string> _actors;
int _runTime;

public:

vector <string> getDirector()const;
vector <string> getActors()const;
int getRuntime()const;




};

#endif