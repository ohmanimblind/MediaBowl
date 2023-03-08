#ifndef SHOW_H
#define SHOW_H
#include "Media.h"


class Show:public Media{
private:

string director;
vector <string> actors;
string runTime;
public: 

Show(string title, string description, double rating, int year, vector<string>genres, string director, string runTime, vector<string>actors);

string getDirector()const;
vector<string> getActors()const;
string getRuntime()const;


};


#endif