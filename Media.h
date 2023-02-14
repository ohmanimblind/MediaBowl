#ifndef MEDIA_H
#define MEDIA_H
#include<vector>

using namespace std;

class Media(){

private:

string _title;
string _description;
double _rating;
int _year;
vector <string> _genres;

public:

virtual string getTitle()const;
virtual vector<string> getGenres()const;
virtual int getYear()const;
virtual string getDescription()const;



};


#endif