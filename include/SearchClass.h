#ifndef SEARCHCLASS_H
#define SEARCHCLASS_H
#include "Data.h"

class SearchClass{

private:
Data* mediaData;

public: 

SearchClass(string bookFile, string movieshowFile);

void SearchBookByTitle(string title);
void SearchMovieByTitle(string title);
void SearchShowByTitle(string title);

};



#endif