#ifndef SHOW_H
#define SHOW_H
#include "Media.h"


class Show:public Media{
private:

int _seasons;
vector <string> actors;
public: 

Show(string title, string description, double rating, int year, vector<string>genres, vector<string>actors,int seasons);

int getSeasons()const;
vector<string> getActors()const;



};


#endif