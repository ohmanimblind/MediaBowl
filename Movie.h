#ifndef MOVIE_H
#define MOVIE_H

#include<iostream>
#include <vector>

using namespace std;

class Movie{
private:

string MovieName;          //name of movie
double MovieRating;             //rating of movie
vector <string> MovieGenres; //Movie genres as an array
int MovieYear;  //Year of Movie release

public:

//Constructor
Movie(string MovieName, double MovieRating, vector<string> MovieGenres, int MovieYear);

//Accessors

string getName()const;
double getRating()const;
int getYear()const;
string getGenres()const;
void printMovie();



};


#endif