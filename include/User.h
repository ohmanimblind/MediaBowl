#ifndef USER_H
#define USER_H
#include "SearchClass.h"

using namespace std;

class User {
	
SearchClass* search;

public:
    User(string bookFile , string movieshowfile);
	void searchBook();
	void searchMovie();
	void searchShow();
	void searchGenre();
	// void getBookRec();
	// void getMovieRec();
	// void getShowRec();
	



};




#endif
