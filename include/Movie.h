#ifndef MOVIE_H
#define MOVIE_H
#include "Media.h"


class Movie:public Media(){
private:

string _directors;
vector <string> _actors;
int _runTime;

public:
Movie(string di , int rT, vector<string> a, string t , vector <string> d, double r , int y, vector<string> g );
string getDirector()const;
vector <string> getActors()const;
int getRuntime()const;




};

#endif